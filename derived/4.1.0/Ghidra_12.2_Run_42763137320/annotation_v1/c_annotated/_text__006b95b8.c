/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B95B8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b95b8; name: FUN_.text__006b95b8
 */


void FUN__text__006b95b8(long param_1,long *param_2,undefined8 param_3,long param_4,long param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short *psVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short *psVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *(long *)(param_5 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = *(long *)(param_5 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) { // [自动静态注释] 条件判断/分支
    lVar5 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  psVar3 = (short *)FUN__text__0069d910(lVar5,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*psVar3 == 2) { // [自动静态注释] 条件判断/分支
    puVar4 = (undefined8 *)FUN__text__006a0f04(0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar4[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar4 = 0;
      puVar4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 **)(param_1 + 0xf8) = puVar4;
    uVar2 = *(undefined4 *)(psVar3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = (undefined8 *)FUN__text__006a0f04(0x48); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      FUN__text__006eb878(puVar4,5,3,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *puVar4 = 0x89e098;
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 **)(*(long *)(param_1 + 0xf8) + 0x18) = puVar4;
    psVar10 = *(short **)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*psVar3 != 1) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 0xf8) = 0;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    fVar12 = *(float *)(param_4 + 0x4c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = *(float *)(param_4 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(psVar3 + 2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (fVar12 <= fVar14) { // [自动静态注释] 条件判断/分支
      fVar13 = fVar15 / fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar15 = fVar13 / (fVar14 / fVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4 = (undefined8 *)FUN__text__006a0f04(0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar15 = fVar15 / fVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar13 = fVar15 / (fVar12 / fVar14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4 = (undefined8 *)FUN__text__006a0f04(0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar4[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar4 = 0;
      puVar4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 **)(param_1 + 0xf8) = puVar4;
    uVar2 = *(undefined4 *)(psVar3 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = FUN__text__006a0f04(0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006c1de4(ABS(fVar13),ABS(fVar15),lVar5,5,3,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(*(long *)(param_1 + 0xf8) + 0x18) = lVar5;
    psVar10 = *(short **)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (psVar10 != (short *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1 + 0xf0) = 4;
    *psVar10 = *psVar3;
    uVar6 = FUN__text__006eb7cc(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar7 = FUN__text__006eb7d4(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = FUN__text__006a0f04(uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar9 = FUN__text__006a0f04(uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006eb7fc(uVar11,uVar8,uVar6,uVar9,uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (param_2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      lVar5 = FUN__text__006c1690(param_3,4,uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      *param_2 = *param_2 + lVar5;
      lVar5 = FUN__text__006c1690(param_3,8,uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      *param_2 = *param_2 + lVar5;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


