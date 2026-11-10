/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C07C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c07c0; name: FUN_.text__006c07c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c07c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x30) = param_3;
  uVar1 = (*(code *)*_DAT_008a5380) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    (param_1 + 0x18,param_1 + 0x20,param_1 + 0x28,param_3,param_4,*_DAT_008a5390, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     param_5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 0x28);
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebe9c(&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_70 = CONCAT44(*(undefined4 *)(param_4 + 0xc),(undefined4)local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(ushort *)(param_4 + 8) < 2) { // [自动静态注释] 条件判断/分支
    uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_70 = CONCAT71(local_70._1_7_,uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = *(undefined8 *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0x100000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006f5be8(param_1 + 0x40,param_2,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_80 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebdfc(&local_90); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = local_90 | 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebde4(&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_98 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = CONCAT44((float)*(int *)(param_4 + 0x18),(float)*(int *)(param_4 + 0x14)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebdf4(&local_b0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_b0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90._0_6_ = CONCAT42(0x10001,(undefined2)local_90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a8 = *(undefined8 *)(param_4 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = &local_70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = (undefined1 *)&local_b0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006f4e30(param_1 + 0x88,param_2,&local_90); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = *(undefined4 *)(param_4 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(param_1 + 0x10) = (short)*(undefined4 *)(param_4 + 0x14);
  *(short *)(param_1 + 0x12) = (short)uVar1;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_4 + 0xc);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


