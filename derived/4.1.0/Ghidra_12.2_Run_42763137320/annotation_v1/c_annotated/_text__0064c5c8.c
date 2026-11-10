/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0054C5C8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064c5c8; name: FUN_.text__0064c5c8
 */


undefined8 FUN__text__0064c5c8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar3 = nn::nifm::Initialize(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1 + 0x89) = 1;
    uVar4 = nn::nifm::IsNetworkAvailable(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(char *)(param_1 + 0x89) == '\0') { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = nn::nifm::IsNetworkAvailable(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((uVar4 & 1) == 0) { // [自动静态注释] 条件判断/分支
    pMVar1 = (MutexType *)(param_1 + 0xcc0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(param_1 + 0xce0) == 0) { // [自动静态注释] 条件判断/分支
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar2 = *(byte *)(*(long *)(param_1 + 0xce0) + 0x25a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((bVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00240ddc(&local_18,*(undefined8 *)(param_1 + 0x50),param_1 + 0xce8); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(param_1 + 0xce0) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(param_1 + 0xce0) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 0xce0) = local_18;
    pcVar5 = *(code **)(local_18 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pcVar5 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(local_18 + 0x380) = 0;
      *(undefined8 *)(local_18 + 0x388) = 0;
      *(undefined8 *)(local_18 + 0x370) = 0;
      *(undefined8 *)(local_18 + 0x378) = 0;
      (*pcVar5)(local_18 + 0x390); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(code **)(local_18 + 0x370) = FUN__text__0064ccf0;
    *(undefined **)(local_18 + 0x378) = &DAT__text__0064cd20;
    *(undefined **)(local_18 + 0x380) = &DAT__text__0064cd24;
    *(undefined **)(local_18 + 0x388) = &DAT__text__0064cd28;
    FUN__text__005e896c(*(undefined8 *)(param_1 + 0xce0),0x7205f1,0xffffffff,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


