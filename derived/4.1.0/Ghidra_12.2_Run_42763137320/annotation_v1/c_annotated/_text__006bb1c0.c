/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BB1C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bb1c0; name: FUN_.text__006bb1c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006bb1c0(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_a4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(byte *)(param_3 + 4) >> 3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_2 + 0xc0) = 0xbf800000bf800000;
    *(undefined8 *)(param_2 + 200) = 0xbf800000bf800000;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar7 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = param_2 + 0xc0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = -0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_2 + 0x5c) = (uint)*(byte *)(param_3 + 9);
    do { // [自动静态注释] 循环/迭代
      local_a4 = *(float *)(param_3 + 0x7c + uVar4 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006c1ba0(0,0x3f800000,&local_a4); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((int)uVar6 < 0) { // [自动静态注释] 条件判断/分支
        lVar2 = param_3 + 0x7c + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar3 = lVar1 + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (fVar7 <= local_a4) { // [自动静态注释] 条件判断/分支
          fVar7 = local_a4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(float *)(lVar1 + uVar4 * 4) = fVar7;
        *(float *)(lVar3 + 0x50) = *(float *)(lVar2 + 0x50) / 255.0;
        *(float *)(lVar3 + 0x54) = *(float *)(lVar2 + 0x54) / 255.0;
        *(float *)(lVar3 + 0x58) = *(float *)(lVar2 + 0x58) / 255.0;
        *(float *)(lVar3 + 0x5c) = *(float *)(lVar2 + 0x5c) / 255.0;
        if (1.0 <= local_a4) { // [自动静态注释] 条件判断/分支
          uVar6 = uVar4 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar2 = param_3 + uVar6 * 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar1 + uVar4 * 4) = 0x3f800000;
        lVar3 = lVar1 + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar3 + 0x50) = *(float *)(lVar2 + 0x8c) / 255.0;
        *(float *)(lVar3 + 0x54) = *(float *)(lVar2 + 0x90) / 255.0;
        *(float *)(lVar3 + 0x58) = *(float *)(lVar2 + 0x94) / 255.0;
        *(float *)(lVar3 + 0x5c) = *(float *)(lVar2 + 0x98) / 255.0;
      } // [自动静态注释] 作用域/控制流边界
      uVar4 = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = lVar5 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar4 != 4); // [自动静态注释] 循环/迭代
    fVar7 = *(float *)(param_3 + 0xcc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = ABS((fVar7 - (float)(int)(fVar7 / 90.0) * 90.0) / 90.0 + -0.5) * -2.0 + 1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = fVar11 * 0.41421357 + 1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = *(float *)(param_1 + 0x50) / *(float *)(param_1 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = *(float *)(param_1 + 0x54) / *(float *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = *_DAT_008a02c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = *_DAT_008a02d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = cosf(fVar7 * (fVar9 / fVar10)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar7 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (1.0 <= fVar13) { // [自动静态注释] 条件判断/分支
      fVar7 = fVar13 + -1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(float *)(param_2 + 0x110) = fVar8 / (fVar12 / (fVar11 * fVar7 + 1.0));
    fVar8 = sinf((fVar9 / fVar10) * *(float *)(param_3 + 0xcc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar7 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (1.0 <= fVar14) { // [自动静态注释] 条件判断/分支
      fVar7 = fVar14 + -1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(float *)(param_2 + 0x114) = -fVar8 / (fVar12 / (fVar11 * fVar7 + 1.0));
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


