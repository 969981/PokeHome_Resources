/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00352FCC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00452fcc; name: FUN_.text__00452fcc
 */


void FUN__text__00452fcc(undefined8 param_1,uint param_2,undefined8 param_3,long *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined2 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long alStack_170 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_160 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_158; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_150; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_148; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_140; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_138; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_130; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_128; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_120; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_118; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_110; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_108; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_100; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_f0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_e8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_e0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_c4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_ac; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00413d04(); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_a0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_c8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(undefined2 *)(*param_4 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(param_5 + 0x12) = *(undefined2 *)(param_5 + 0x10);
  local_d0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = (ulong)param_2 * 2 + 0xf & 0x3fffffff0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = auStack_160 + -uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = (long)local_78 - uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_98 = local_88 - uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_90 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a8 = local_98 - uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_c0 = local_a8 - uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = local_c0 - uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_148 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_d8 = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00451f50(param_3,param_2,&local_78,&local_88,&local_a8,&local_98,&local_d8,&local_c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = uStack_80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = local_88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_158 = uStack_80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_150 = local_88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_e0 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar9 + -0x10) = param_8;
  FUN__text__00453270(lVar2,uVar3,param_3,uVar1,param_4,&local_e0,param_6,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = uStack_90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = local_98; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar9 + -0x10) = param_8;
  FUN__text__00453c90(lVar4,uVar5,param_3,uVar1,param_4,&local_e0,param_6,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_f8 = local_c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_f0 = local_b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_e8 = CONCAT44(uStack_ac,local_b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00453f00(&local_f8,param_3,uVar1,param_4,&local_e0,param_6,param_7,param_8); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = local_a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = local_a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar9 + -0x10) = param_8;
  FUN__text__00454400(lVar2,uVar3,param_3,uVar1,param_4,&local_e0,param_6,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_110 = local_d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_108 = local_d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_100 = CONCAT44(uStack_c4,local_c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004549f0(&local_110,param_3,uVar1,param_4,&local_e0,param_6,param_7,param_8); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar7 = uStack_70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar6 = local_78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar9 + -0x10) = param_8;
  FUN__text__00455490(puVar6,uVar7,param_3,uVar1,param_4,&local_e0,param_6,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_128 = local_d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_120 = local_d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_130 = CONCAT44(uStack_ac,local_b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_118 = CONCAT44(uStack_c4,local_c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_140 = local_c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_138 = local_b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar9 + -8) = local_158;
  *(long *)(lVar9 + -0x10) = local_150;
  FUN__text__004525e0(param_3,lVar2,uVar3,lVar4,uVar5,&local_128,&local_140); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00413d04(local_148); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


