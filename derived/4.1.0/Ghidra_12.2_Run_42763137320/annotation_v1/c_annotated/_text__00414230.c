/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00314230
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00414230; name: FUN_.text__00414230
 */


void FUN__text__00414230(ulong *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 1)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  iVar1 = *(int *)((long)param_1 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (iVar1 != 0) { // [自动静态注释] 循环/迭代
    puVar2 = (ulong *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar2 != (ulong *)0x0) { // [自动静态注释] 条件判断/分支
      *param_1 = *puVar2;
      *puVar2 = 0;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00400fc0(0x12,param_1[7] & (ulong)puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = *(int *)((long)param_1 + 0x44) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)((long)param_1 + 0x44) = iVar1;
  } // [自动静态注释] 作用域/控制流边界
  if ((int)param_1[8] != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0x12,param_1[7] & *param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 8) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 1)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00405ac0((int)param_1[5]); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 5) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


