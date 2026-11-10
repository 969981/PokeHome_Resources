/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00432F00
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00532f00; name: FUN_.text__00532f00
 */


bool FUN__text__00532f00(undefined1 param_1 [16],double param_2,double param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_5,long param_6,long param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dStack_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dStack_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = *(undefined8 *)(param_4 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = *(undefined8 *)(param_4 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = *(undefined8 *)(param_4 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_98 = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_90 = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b0 = (double)FUN__text__0047da2c(*(undefined8 *)(*(long *)(param_4 + 8) + 0x20)); // [自动静态注释] 调用尚未恢复正式名称的函数
  dStack_a8 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__0052163c(param_7,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__00521904(param_7,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  dVar10 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar11 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_c8 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dStack_c0 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b8 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar5 = (double)FUN__text__00520f94(param_7,&local_b0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = param_6 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = *(float *)(param_6 + 0x128); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_6 + 0x2c) = fVar6;
  dVar10 = (dVar5 - local_b0) * (dVar5 - local_b0) + (dVar10 - dStack_a8) * (dVar10 - dStack_a8) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           (dVar11 - local_a0) * (dVar11 - local_a0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  dVar11 = (double)(fVar6 * fVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58) == *(long *)(param_7 + 0x70)) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__00521c6c(uVar7,uVar8,uVar9,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (dVar10 < dVar11) { // [自动静态注释] 条件判断/分支
      if ((uVar2 & 1) == 0) goto LAB__text__00533010; // [自动静态注释] 条件判断/分支
LAB__text__00533058: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__0052b1ac(lVar3,&local_98,&local_c8); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x005330f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (dVar10 < dVar11) { // [自动静态注释] 条件判断/分支
LAB__text__00533010: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = FUN__text__00521b44(uVar7,uVar8,uVar9,param_7,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (((uVar2 & 1) == 0) || // [自动静态注释] 条件判断/分支
       (uVar2 = FUN__text__00533100(uVar7,uVar8,uVar9,uVar4,param_2,param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined8 *)(param_5 + 0xb0),0,lVar3), (uVar2 & 1) == 0)) {
      FUN__text__0052b23c(lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x005330f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    goto LAB__text__00533058; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*(long *)(param_6 + 8) + 0x10))(lVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined2 *)(param_6 + 0x31) = 0x100;
  lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x005330f8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (lVar3 != -1) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_6 + 0x33) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return dVar10 < dVar11; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


