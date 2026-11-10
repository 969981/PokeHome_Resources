/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DD6F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd6f0; name: FUN_.text__004dd6f0
 */


undefined8 FUN__text__004dd6f0(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar2 = FUN__text__004ddcf4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar3 = (**(code **)(*param_1 + 0x140))(param_1,iVar2,param_1 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar3 != 1) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(lVar4 + 0x30c) = iVar2 - (int)param_1[5];
  puVar1 = (uint *)(lVar4 + 0x313); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar1 = *puVar1 & 0xfe3fffff;
  if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[0xb] + 0x90))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


