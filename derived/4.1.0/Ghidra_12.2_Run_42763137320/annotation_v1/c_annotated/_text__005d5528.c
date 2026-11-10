/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D5528
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d5528; name: FUN_.text__005d5528
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d5528(long *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005d55f4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_008a5998 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a5998 + 0x10;
  param_1[9] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar4 = _DAT_008a59a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0 < param_2) { // [自动静态注释] 条件判断/分支
    *_DAT_008a59a0 = param_2;
  } // [自动静态注释] 作用域/控制流边界
  puVar3 = _DAT_008a5698; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = _DAT_008a0448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (*(code *)*_DAT_008a5698)(*_DAT_008a0448,0x11,&local_34); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*puVar3)(*puVar2,0x24,&local_58); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebbfc(&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_58 = CONCAT71(local_58._1_7_,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = CONCAT44(*piVar4,(undefined4)local_58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005d5724(param_1,&local_58,local_34); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


