/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00175254
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00275254; name: FUN_.text__00275254
 */


void FUN__text__00275254(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_30 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = *(int *)(*param_1 + 0x734) + (int)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = iVar1 >> 0x1f & 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (5 < iVar1) { // [自动静态注释] 条件判断/分支
    uVar2 = 0xfffffffa; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00274c50(*param_1,uVar2 + iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005e927c(auStack_30,0x877068); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c1e4c(auStack_30); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_18 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


