/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00419E80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00519e80; name: FUN_.text__00519e80
 */


undefined8 FUN__text__00519e80(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar3 == 0) || (fVar4 = (float)NEON_ucvtf((int)param_1[2]), 0.9 < fVar4 / (float)uVar3)) { // [自动静态注释] 条件判断/分支
    FUN__text__0051c0c0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar3 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = *(uint *)(param_2 + 0x50) / uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = (ulong)(*(uint *)(param_2 + 0x50) - uVar2 * uVar3) * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(*param_1 + lVar1);
  *(long *)(*param_1 + lVar1) = param_2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


