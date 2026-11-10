/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038F3EC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048f3ec; name: FUN_.text__0048f3ec
 */


void FUN__text__0048f3ec(long *param_1,byte *param_2,byte *param_3,undefined4 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = (**(code **)(*param_1 + 0x40))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (**(code **)(*param_1 + 0x38))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = *param_2 | 1;
  *param_4 = 0;
  if (((uVar4 & 1) != 0) && // [自动静态注释] 条件判断/分支
     (bVar1 = *param_2, *param_2 = bVar1 | 4, (uVar3 & 1) == 0 && (bVar1 & 2) != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_3 = *param_3 | 2;
  } // [自动静态注释] 作用域/控制流边界
  if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = *(ushort *)(param_1[1] + 0x14a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_2 = *param_2 | 2;
    *param_4 = 0x3f800000;
    uVar2 = *(ushort *)(param_1[1] + 0x14a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
    *param_3 = *param_3 | 8;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


