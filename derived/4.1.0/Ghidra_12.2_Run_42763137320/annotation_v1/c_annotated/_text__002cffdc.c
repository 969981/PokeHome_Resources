/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001CFFDC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002cffdc; name: FUN_.text__002cffdc
 */


void FUN__text__002cffdc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_b0 [96]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = FUN__text__002d2b78(*(undefined8 *)(param_1 + 0x80)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__002d3d1c(*(undefined8 *)(param_1 + 0x88)); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_c0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_b8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0x6ea3fdf7733ff2e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0x71947a; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 0x36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_d0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_c8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = FUN__text__002ce1c4(*(undefined8 *)(param_1 + 0xa0),&local_50,&local_d0); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar1 = local_c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_c8 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_c0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_b8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_d0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_c8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar1)(auStack_b0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = FUN__text__002d4404(*(undefined8 *)(param_1 + 0x90)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar2 | uVar3 | uVar4 | uVar5) & 1) == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


