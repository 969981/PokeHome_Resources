/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003B0588
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b0588; name: FUN_.text__004b0588
 */


void FUN__text__004b0588(undefined8 param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_88 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_78 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_68 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_48 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00411c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00413d04(auStack_88); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_58 = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00412c50(local_48,&local_58,0x10,8,0x71ae1c,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1 = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_48[0] != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *local_48[0] = 0x88b5b0;
    local_48[0][1] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_58 = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48[0] = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00413d68(auStack_78,local_48,1,local_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_58 = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00412c50(local_48,&local_58,0x18,8,0x71f667,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1 = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_48[0] != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *local_48[0] = 0x88b5d8;
    local_48[0][1] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48[0][2] = param_2 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_58 = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48[0] = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00413d68(auStack_68,local_48,1,local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_18 = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00412c50(local_48,&local_18,0x10,8,0x7147e7,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1 = local_18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_48[0] != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *local_48[0] = 0x88b600;
  } // [自动静态注释] 作用域/控制流边界
  local_18 = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48[0] = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00413d68(&local_58,local_48,1,local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_18 = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00412c50(local_48,&local_18,0x10,8,0x716c11,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_38 = local_18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_48[0] != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *local_48[0] = 0x88b628;
    local_48[0][1] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_18 = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00413d68(local_48,&local_38,1,local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00413e10(local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00413b00(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00411c20(); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


