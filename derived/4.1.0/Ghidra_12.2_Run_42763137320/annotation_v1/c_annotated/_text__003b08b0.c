/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B08B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b08b0; name: FUN_.text__003b08b0
 */


undefined8 FUN__text__003b08b0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0x8ec) == 1) goto LAB__text__003b0a2c; // [自动静态注释] 条件判断/分支
  if (*(int *)(param_1 + 0x8ec) != 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(param_1 + 0x7b4) == 1) { // [自动静态注释] 条件判断/分支
    if (*(int *)(param_1 + 0x8f8) == 1) { // [自动静态注释] 条件判断/分支
      iVar5 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__003b0910; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (*(int *)(param_1 + 0x7b4) == 3) { // [自动静态注释] 条件判断/分支
    iVar5 = *(int *)(param_1 + 0x8f8) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__003b0910: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(int *)(param_1 + 0x8f8) = iVar5;
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = FUN__text__003b9238(*(undefined8 *)(param_1 + 0x748)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar7 & 1) != 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(param_1 + 0x8f8) == 2) { // [自动静态注释] 条件判断/分支
    uVar1 = FUN__text__003b7414(*(long *)(param_1 + 0x800), // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined4 *)(*(long *)(param_1 + 0x800) + 0x14),
                                (int)*(float *)(*(long *)(param_1 + 0x748) + 0x1d4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x50))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar9 = *(long *)(param_1 + 0x800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar1 < uVar2) { // [自动静态注释] 条件判断/分支
      *(int *)(lVar9 + 0x10) = (int)*(float *)(*(long *)(param_1 + 0x748) + 0x1d4);
      uVar8 = *(undefined8 *)(param_1 + 0x7e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar10 = *(float *)(*(long *)(param_1 + 0x748) + 0x1d4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar9 + 0xc);
      uVar8 = *(undefined8 *)(param_1 + 0x7e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar10 = (float)*(int *)(*(long *)(param_1 + 0x800) + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__003b6b04(fVar10,uVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar9 = *(long *)(param_1 + 0x800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x8f8) = 0;
    uVar4 = FUN__text__003b7414(lVar9,*(undefined4 *)(lVar9 + 0x14),*(undefined4 *)(lVar9 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_48 = FUN__text__003b7494(lVar9,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar5 = FUN__text__003b7340(lVar9,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar8 = *(undefined8 *)(param_1 + 0x800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = FUN__text__003b73b4(uVar8,param_1 + 0x8f0); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_48 = FUN__text__003b7494(uVar8,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar6 = FUN__text__003b7340(uVar8,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003b9248((float)((iVar6 - iVar5) + *(int *)(*(long *)(param_1 + 0x800) + 0x10)), // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined8 *)(param_1 + 0x748),*(undefined4 *)(param_1 + 0x8a4));
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((*(int *)(param_1 + 0x8f0) == *(int *)(param_1 + 0x7b8)) && // [自动静态注释] 条件判断/分支
     (*(int *)(param_1 + 0x8f4) == *(int *)(param_1 + 0x7bc))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar9 = *(long *)(param_1 + 0x748); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(float *)(lVar9 + 0x1d4) < *(float *)(lVar9 + 0x1a4)) && // [自动静态注释] 条件判断/分支
       (*(float *)(lVar9 + 0x1a0) < *(float *)(lVar9 + 0x1d4))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar10 = *(float *)(param_1 + 0x894); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar9 = param_1 + 0x8f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar5 = FUN__text__003b7340(*(undefined8 *)(param_1 + 0x800),lVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
      fVar11 = *(float *)(param_1 + 0x898); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar6 = FUN__text__003b7340(*(undefined8 *)(param_1 + 0x800),lVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
      fVar12 = *(float *)(param_1 + 0x89c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar3 = FUN__text__003b7340(*(undefined8 *)(param_1 + 0x800),lVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003b9350(fVar10 * (float)iVar5,fVar11 * (float)iVar6,fVar12 * (float)iVar3, // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined8 *)(param_1 + 0x748),*(undefined4 *)(param_1 + 0x8a0));
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x8ec) = 1;
LAB__text__003b0a2c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (((*(int *)(param_1 + 0x7b4) == 3) || // [自动静态注释] 条件判断/分支
      ((*(int *)(param_1 + 0x7b4) == 0 && (*(char *)(param_1 + 0x7c0) == '\0')))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
     (uVar7 = FUN__text__003b9400(*(undefined8 *)(param_1 + 0x748)), (uVar7 & 1) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003b93bc(0x3f800000,*(undefined8 *)(param_1 + 0x748)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = FUN__text__003b9238(*(undefined8 *)(param_1 + 0x748)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar7 & 1) != 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003a1648(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(param_1 + 0x85) = 1;
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 2000),1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__003b7414(*(long *)(param_1 + 0x800), // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined4 *)(*(long *)(param_1 + 0x800) + 0x14),
                              (int)*(float *)(*(long *)(param_1 + 0x748) + 0x1d4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x50))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = *(long *)(param_1 + 0x800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < uVar2) { // [自动静态注释] 条件判断/分支
    uVar4 = *(undefined4 *)(lVar9 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar9 + 0xc);
    uVar4 = FUN__text__003b7160(*(undefined8 *)(param_1 + 0x800)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003adcc0(param_1,uVar4,(int)*(float *)(*(long *)(param_1 + 0x748) + 0x1d4)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(param_1 + 0xa14) = 0;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


