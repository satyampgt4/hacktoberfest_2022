def add_time(start, duration, day=None):     #("3:00 PM", "3:10")
  start_time = list(map(int,start[:-3].split(':')))   #[ 3,00 ]
  duration = list(map(int,duration.split(':')))   #[ 3,10 ]

  days=('Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday')
  #calc time
  start_time[1]+=duration[1]
  count=0;
  while start_time[1]>60:
    count+=1
    start_time[1]-=60
  start_time[0] += count + duration[0]

  #calc days
  count=0
  while start_time[0]>=12:
    start_time[0]-=12
    if 'PM' in start:
      count+=1
      start=start.replace('PM','AM')
    else:
      start=start.replace('AM','PM')

  
  start_time[0] = '12' if start_time[0] == 0 else str(start_time[0])
  start_time[1] = str(start_time[1]).rjust(2, '0')
  new_time = ':'.join(start_time) + start[-3:]

  
  if day is not None:
    day=day.lower().capitalize()
    days= days[days.index(day):]+days[:days.index(day)]
    n=count
    while n>7:
      n-=7
    new_time += ', ' + days[n] 
  
  if count==1:
    new_time+= ' (next day)'
  elif count>1:
    new_time += ' (' + str(count) + ' days later)'
    
  return new_time