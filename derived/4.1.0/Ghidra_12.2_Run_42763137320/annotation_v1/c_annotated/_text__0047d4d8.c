/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0037D4D8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d4d8; name: FUN_.text__0047d4d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0047d4d8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x38) != 0)) { // [自动静态注释] 条件判断/分支
    pfVar4 = *(float **)(lVar5 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(undefined8 *)(pfVar4 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)pfVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(pfVar4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined8 *)(pfVar4 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined8 *)(pfVar4 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(pfVar4 + 8);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    fVar6 = pfVar4[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar7 = pfVar4[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = *pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = pfVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = pfVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = pfVar4[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_1 + 0x3c) = fVar10 * fVar6 - fVar8 * fVar7;
    *(float *)(param_1 + 0x40) = fVar9 * fVar7 - fVar11 * fVar10;
    *(float *)(param_1 + 0x44) = fVar11 * fVar8 - fVar9 * fVar6;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
    uVar1 = _DAT_008a4480; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0044b8a0(_DAT_008a4480,*(undefined8 *)(*(long *)(param_1 + 8) + 0x58),&uStack_12); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar5 + 0x78);
    FUN__text__0044b8a0(uVar1,*(undefined8 *)(*(long *)(param_1 + 8) + 0x58),&uStack_11); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


