/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001B1D24
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b1d24; name: FUN_.text__002b1d24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002b1d24(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_14 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = (MutexType *)(param_1 + 0x178); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((*(long *)(param_1 + 0x158) == 0) || (iVar4 = FUN__text__002c44a8(), iVar4 != param_2)) { // [自动静态注释] 条件判断/分支
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar5 = *(long *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = local_14[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar4 = FUN__text__002c4538(*(undefined8 *)(param_1 + 0x158)); // [自动静态注释] 调用尚未恢复正式名称的函数
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar5 = *(long *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = iVar4 == 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = local_14[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_14[0] = bVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    if (*(code **)(param_1 + 0x1a0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(param_1 + 0x1a0))(param_1 + 0x1c0,local_14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar5 = *(long *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = local_14[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    local_14[0] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__002c4574(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar5 = *(long *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x158) = 0;
    uVar2 = local_14[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
      if (*(long *)(lVar5 + 8) != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*(long *)(lVar5 + 8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(lVar5 + 8) = 0;
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(**(long **)(param_1 + 0x160) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0x160),lVar5,*(undefined8 *)(param_1 + 0x168), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0x170));
      uVar2 = local_14[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  local_14[0] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005daa98(*_DAT_0089f550,param_1 + 0xa8); // [自动静态注释] 调用尚未恢复正式名称的函数
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


