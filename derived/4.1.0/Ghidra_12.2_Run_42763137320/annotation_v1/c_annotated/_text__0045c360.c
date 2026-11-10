/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035C360
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045c360; name: FUN_.text__0045c360
 */


undefined4 FUN__text__0045c360(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_50 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = *(undefined8 *)(param_1 + 0x170); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = (undefined8 *)FUN__text__0045c9e0(auStack_50,uVar3,&uStack_21); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar2 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *puVar2 = uVar3;
    uVar1 = FUN__text__0047a320(*(undefined8 *)(*(long *)(param_1 + 0x150) + 8),auStack_50,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if ((local_40 == (undefined1 *)0x0) || // [自动静态注释] 条件判断/分支
     (local_38 = local_38 & 0xffffffff00000000, local_40 == auStack_50)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00400fc0(4); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


