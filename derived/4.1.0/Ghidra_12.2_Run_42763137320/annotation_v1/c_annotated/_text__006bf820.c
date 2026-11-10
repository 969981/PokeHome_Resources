/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BF820
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bf820; name: FUN_.text__006bf820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006bf820(float param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = _DAT_008a1d28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = (ulong)*(byte *)(*(long *)(param_2 + 0x150) + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
    lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = *_DAT_008a02d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = (float)NEON_ucvtf(*_DAT_008a1d20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar1 = *(long *)(param_2 + 0x150) + lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar8 = *(long *)(lVar1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = *(uint *)(lVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar2 = (float *)(lVar8 + (ulong)*(uint *)(lVar8 + 8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar10 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(char *)(*(long *)(param_2 + 0x150) + 0x10) == '\x01') && (1 < *(ushort *)(lVar8 + 4))) // [自动静态注释] 条件判断/分支
      { // [自动静态注释] 作用域/控制流边界
        fVar12 = *pfVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar13 = pfVar2[(ulong)(*(ushort *)(lVar8 + 4) - 1) * 3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (param_1 <= fVar13) { // [自动静态注释] 条件判断/分支
          if (param_1 < fVar12) { // [自动静态注释] 条件判断/分支
            fVar10 = fmodf(fVar12 - param_1,fVar13 - fVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            fVar10 = fVar13 - fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          fVar10 = fmodf(param_1 - fVar12,fVar13 - fVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar10 = fVar12 + fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      fVar10 = (float)FUN__text__006c0ec0(fVar10,pfVar2,*(undefined2 *)(lVar8 + 4)); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((int)uVar3 < 3) { // [自动静态注释] 条件判断/分支
        fVar12 = -fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar3 != 1) { // [自动静态注释] 条件判断/分支
          fVar12 = fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(float *)(param_3 + (ulong)uVar3 * 4 + 0x20) = fVar12;
      } // [自动静态注释] 作用域/控制流边界
      else if (uVar3 < 6) { // [自动静态注释] 条件判断/分支
        lVar1 = param_3 + (ulong)(uVar3 - 3) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar3 != 4) { // [自动静态注释] 条件判断/分支
          fVar10 = -fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar6 = (ulong)(fVar10 * (fVar9 / fVar11)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pfVar2 = (float *)(lVar4 + (uVar6 >> 0x18 & 0xff) * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar10 = (float)((uint)uVar6 & 0xffffff) * 5.9604645e-08; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar1 + 0x14) = pfVar2[1] + fVar10 * pfVar2[3];
        *(float *)(lVar1 + 8) = *pfVar2 + fVar10 * pfVar2[2];
      } // [自动静态注释] 作用域/控制流边界
      else if (uVar3 < 10) { // [自动静态注释] 条件判断/分支
        *(char *)(param_3 + (ulong)(uVar3 - 6) + 0x2c) = (char)(int)fVar10;
      } // [自动静态注释] 作用域/控制流边界
      else if (uVar3 < 0xe) { // [自动静态注释] 条件判断/分支
        *(char *)(param_3 + (ulong)(uVar3 - 10) + 0x30) = (char)(int)fVar10;
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(float *)(param_3 + (ulong)(uVar3 - 0xe) * 4) = fVar10;
      } // [自动静态注释] 作用域/控制流边界
      lVar7 = lVar7 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar5 * 0x10 != lVar7); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


