/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FD804
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fd804; name: FUN_.text__003fd804
 */


void FUN__text__003fd804(long param_1,undefined8 *param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((((param_3 & 1) != 0) && (*(char *)(param_1 + 0x68) == '\0')) && // [自动静态注释] 条件判断/分支
     (*(char *)(param_1 + 0xc3) == '\0')) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_2 = 0;
    *(byte *)((long)param_2 + 0x14) = *(byte *)((long)param_2 + 0x14) & 0xf8 | 3;
    plVar4 = (long *)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(param_1 + 0xb8) != 0) { // [自动静态注释] 条件判断/分支
      plVar4 = *(long **)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *plVar4 = (long)param_2;
    *(undefined8 **)(param_1 + 0xb0) = param_2;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar5 = *(uint *)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = *(long *)param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *(uint *)((long *)param_2[1] + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = lVar8 + (ulong)*(uint *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = (int)uVar2 - uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar8 + (ulong)uVar6 <= (ulong)uVar5 || uVar5 <= uVar2) { // [自动静态注释] 条件判断/分支
    iVar3 = *(uint *)(param_2 + 2) - uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_1 + 0x98) = iVar3 + *(int *)(param_1 + 0x98);
  lVar7 = *(long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar8 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003fe878(lVar7 + 0x2a8); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00400fc0(7,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


