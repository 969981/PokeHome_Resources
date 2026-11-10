/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B7000
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7000; name: FUN_.text__003b7000
 */


void FUN__text__003b7000(long param_1,undefined8 *param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  iVar4 = (int)((ulong)uVar3 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = iVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = (int)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x28) != 0) { // [自动静态注释] 条件判断/分支
    iVar1 = (int)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = iVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar2 != 0) { // [自动静态注释] 条件判断/分支
    iVar4 = param_3 / iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = iVar4 - iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_3 != iVar4 * iVar2) { // [自动静态注释] 条件判断/分支
    iVar1 = iVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar5 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0.0 <= (float)iVar1) { // [自动静态注释] 条件判断/分支
    fVar5 = (float)iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 0xc) = (int)fVar5;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


