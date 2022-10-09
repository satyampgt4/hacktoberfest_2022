## How to Contribute 🏗

**🌟.** Star🌟 the repository to appreciate the work.

**1.* Fork [this](https://github.com/GDSC-IETDAVV/hacktoberfest_2022.git) repository.

![step1](https://user-images.githubusercontent.com/72425181/122670266-be43ee80-d1de-11eb-9330-8d07ce2bd7ab.png)

**2.** Clone your forked copy of the project.

```
git clone  https://github.com/<your_user_name>/hacktoberfest_2022.git
```

**3.** Navigate to the project directory :file_folder: .

```
cd hacktoberfest_2022
```

**4.** Add a reference(remote) to the original repository.

```
git remote add upstream https://github.com/GDSC-IETDAVV/hacktoberfest_2022.git
```

**5.** Check the remotes for this repository.

```
git remote -v
```

**6.** Always take a pull from the upstream repository to your main branch to keep it at par with the main project(updated repository).

```
git pull upstream main
```

**7.** Create a new branch.

```
git checkout -b <your_branch_name>
```

**8.** Perform your desired changes to the code base.

<p align="center"><img width=35% src="https://media2.giphy.com/media/L1R1tvI9svkIWwpVYr/giphy.gif?cid=ecf05e47pzi2rpig0vc8pjusra8hiai1b91zgiywvbubu9vu&rid=giphy.gif"></p>

**9.** add your changes:heavy_check_mark: .

```
git add .
```

**10.** Commit your changes .

```
git commit -m "Relevant message"
```

**11.** Push the committed changes in your feature branch to your remote repo.

```
git push -u origin <your_branch_name>
```

**12.** To create a pull request, click on `compare and pull requests`. Please ensure you compare your feature branch to the desired branch of the repo you are supposed to make a PR to.

**13.** Add an appropriate title and description to your pull request explaining your changes and efforts done.

**14.** Click on `Create Pull Request`.

## Avoid Conflicts {Syncing your fork}

An easy way to avoid conflicts is to add an 'upstream' for your git repo, as other PR's may be merged while you're working on your branch/fork.

```terminal
git remote add upstream https://github.com/GDSC-IETDAVV/hacktoberfest_2022.git
```

You can verify that the new remote has been added by typing

```terminal
git remote -v
```

To pull any new changes from your parent repo simply run

```terminal
git merge upstream/master
```

This will give you any eventual conflicts and allow you to easily solve them in your repo. It's a good idea to use it frequently in between your own commits to make sure that your repo is up to date with its parent.

For more information on syncing forks [read this article from Github.](https://help.github.com/articles/syncing-a-fork/)
