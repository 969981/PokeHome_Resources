/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002030CC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003030cc; name: FUN_.text__003030cc
 */


void FUN__text__003030cc(long param_1,uint param_2,uint param_3,undefined8 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_3 < 0x1e) && (param_2 < *(uint *)(param_1 + 0x700fdc))) { // [自动静态注释] 条件判断/分支
    lVar4 = param_1 + (ulong)param_2 * 0x5fa0 + (ulong)param_3 * 0x330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(undefined8 *)(lVar4 + 0x35c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_4 = *(undefined8 *)(lVar4 + 0x354);
    param_4[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(undefined8 *)(lVar4 + 0x364); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined8 *)(lVar4 + 0x36c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined8 *)(lVar4 + 0x37c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_4[4] = *(undefined8 *)(lVar4 + 0x374); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_4[5] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_4[2] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_4[3] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_4[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_4[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_4[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_4[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_4 = 0;
  param_4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


