/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0018F338
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028f338; name: FUN_.text__0028f338
 */


void FUN__text__0028f338(long param_1,uint param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long alStack_a0 [12]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pcVar1 = *(code **)(param_1 + 0x658); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar1 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined8 *)(param_1 + 0x668) = 0;
    *(undefined8 *)(param_1 + 0x650) = 0;
    *(undefined8 *)(param_1 + 0x658) = 0;
    (*pcVar1)(param_1 + 0x670); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((code *)param_3[2] != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x670); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = param_3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x658) = param_3[1];
    *(undefined8 *)(param_1 + 0x668) = uVar2;
    uVar2 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x660) = param_3[2];
    *(undefined8 *)(param_1 + 0x650) = uVar2;
  } // [自动静态注释] 作用域/控制流边界
  local_c0 = FUN__text__0028f5d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b8 = FUN__text__0028f614; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b0 = &LAB__text__0028f618; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a8 = &LAB__text__0028f624; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  alStack_a0[0] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 < 5) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0028f3f4 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0028f400 + (ulong)*(byte *)((ulong)param_2 + 0x730ed1) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001364d0(0x7167dd,*(undefined8 *)(param_1 + 0x60),&local_c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar1 = local_b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_b8 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_b0 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_a8 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_c0 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_b8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar1)(alStack_a0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


