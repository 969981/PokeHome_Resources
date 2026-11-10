/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035BA54
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045ba54; name: FUN_.text__0045ba54
 */


void FUN__text__0045ba54(undefined8 *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = *param_2;
  param_1[1] = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = param_2[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = param_2[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = param_2[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[8] = param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = param_2[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = param_2[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = param_2[0xd]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xc] = param_2[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xe] = param_2[0xe]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_1[0x10] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x11) = 0;
    (**(code **)(*(long *)param_1[0xf] + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    param_1[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x10] = param_2[0x10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xf] = param_2[0xf]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((long)param_1 + 0x8c) = *(undefined4 *)((long)param_2 + 0x8c);
  param_2[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  if ((param_1[0x14] != 0) && (*(char *)(param_1 + 0x15) != '\0')) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[0x13] + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(param_1 + 0x15) = 0;
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x14] = param_2[0x14]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x13] = param_2[0x13]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((long)param_1 + 0x10c) = *(undefined4 *)((long)param_2 + 0x10c);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  FUN__text__00451da8(param_1 + 0x18,param_2 + 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0045cc00(param_1 + 0x1d); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x1d] = param_2[0x1d]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  param_1[0x1f] = param_2[0x1f]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x20] = param_2[0x20]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[0x1d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_2 + 0x1e) = 0;
  param_2[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[0x20] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


