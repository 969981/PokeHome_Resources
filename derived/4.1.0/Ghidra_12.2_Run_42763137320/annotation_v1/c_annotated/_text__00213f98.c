/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00113F98
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00213f98; name: FUN_.text__00213f98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__00213f98(undefined8 *param_1,undefined4 param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_e0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puStack_c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 2) == 0 || *(char *)((long)param_1 + 0x14) == '\0') { // [自动静态注释] 条件判断/分支
    uVar2 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lStack_a8 = FUN__text__00215448(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lStack_a8 == 0) { // [自动静态注释] 条件判断/分支
      return 4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = *(undefined8 *)(lStack_a8 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_58 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_e0 = FUN__text__00214448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_d8 = FUN__text__002148d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_d0 = &LAB__text__00214a88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puStack_c8 = &LAB__text__00214a9c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_c0 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_b8 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_b0 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__00309c90(*_DAT_0089f528,&local_60,&local_e0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    pcVar1 = local_d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_d8 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      local_d0 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puStack_c8 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_e0 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_d8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*pcVar1)(&local_c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if ((local_48 & 1) != 0) { // [自动静态注释] 条件判断/分支
      operator_delete(local_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


