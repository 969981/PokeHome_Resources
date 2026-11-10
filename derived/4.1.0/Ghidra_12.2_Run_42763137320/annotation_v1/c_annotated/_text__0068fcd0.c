/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058FCD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068fcd0; name: FUN_.text__0068fcd0
 */


void FUN__text__0068fcd0(long param_1,undefined8 param_2,code *param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  _func_void_void_ptr_void_ptr *p_Var9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a0 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pcVar1 = (char *)(param_1 + 0x1bd1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = nn::fontll::ScalableFontEngine::GetPointerToWorkBuffer(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*pcVar1 == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) { // [自动静态注释] 条件判断/分支
    uVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar8 = nn::fontll::ScalableFontEngine::GetPointerToWorkBuffer(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar4 = *pcVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_a0[uVar15] = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (cVar4 == '\0') break; // [自动静态注释] 条件判断/分支
      uVar15 = uVar15 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar15 < *(uint *)(param_1 + 0x1bd4)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  uVar15 = (ulong)*(uint *)(param_1 + 0x1884); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_1 + 0x1884) != 0) { // [自动静态注释] 条件判断/分支
    uVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar17 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      pbVar2 = (byte *)(param_1 + uVar16 + 0x1888); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar5 = *pbVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar10 = (uint)bVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar5 != 0) { // [自动静态注释] 条件判断/分支
        lVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar15 = -(uVar17 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          p_Var9 = *(_func_void_void_ptr_void_ptr **) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    (*(long *)(param_1 + 0x1c48) + uVar15 + lVar14 * 8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (p_Var9 != (_func_void_void_ptr_void_ptr *)0x0) { // [自动静态注释] 条件判断/分支
            nn::fontll::ScalableFontEngine::FinalizeOtfKerningTable // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (*(OtfKerningTable **)(param_1 + 8),p_Var9,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            *(undefined8 *)(*(long *)(param_1 + 0x1c48) + uVar15 + lVar14 * 8) = 0;
            uVar10 = (uint)*pbVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          lVar14 = lVar14 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while ((uint)lVar14 < uVar10); // [自动静态注释] 循环/迭代
        uVar15 = (ulong)*(uint *)(param_1 + 0x1884); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar17 = (ulong)((int)uVar17 + (uint)lVar14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar16 = uVar16 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar16 < uVar15); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  nn::fontll::ScalableFontEngine::Finalize(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((*pcVar1 == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) { // [自动静态注释] 条件判断/分支
    uVar15 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      nn::fontll::ScalableFontEngine::Finalize(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*pcVar1 == '\0') break; // [自动静态注释] 条件判断/分支
      bVar6 = uVar15 < *(uint *)(param_1 + 0x1bd4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar15 = uVar15 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (bVar6); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  (*param_3)(*(undefined8 *)(param_1 + 8),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 8) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x10),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x10) = 0;
  (*param_3)(uVar7,param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((*pcVar1 == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) { // [自动静态注释] 条件判断/分支
    uVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      (*param_3)(local_a0[uVar15],param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*pcVar1 == '\0') break; // [自动静态注释] 条件判断/分支
      uVar15 = uVar15 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar15 < *(uint *)(param_1 + 0x1bd4)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  lVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar11 = (long *)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar12 = *(long **)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar12 != plVar11) goto LAB__text__0068ff00; // [自动静态注释] 条件判断/分支
  while (lVar14 = lVar14 + 1, lVar14 != 0x100) { // [自动静态注释] 循环/迭代
    lVar13 = param_1 + lVar14 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar11 = (long *)(lVar13 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar12 = *(long **)(lVar13 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar12 != plVar11) { // [自动静态注释] 条件判断/分支
LAB__text__0068ff00: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        plVar3 = (long *)plVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar13 = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(*plVar12 + 8) = plVar3;
        *plVar3 = *plVar12;
        *(long **)(lVar13 + 8) = plVar12;
        *plVar12 = lVar13;
        plVar12 = (long *)plVar11[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar12 != plVar11); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  plVar11 = *(long **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar11 != (long *)(param_1 + 0x50)) { // [自动静态注释] 循环/迭代
    plVar12 = (long *)plVar11[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar14 = *plVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(*plVar11 + 8) = plVar12;
    *plVar12 = *plVar11;
    *(long **)(lVar14 + 8) = plVar11;
    *plVar11 = lVar14;
    plVar11 = *(long **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar11 = *(long **)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar11 != (long *)(param_1 + 0x60)) { // [自动静态注释] 循环/迭代
    plVar12 = (long *)plVar11[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar14 = *plVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(*plVar11 + 8) = plVar12;
    *plVar12 = *plVar11;
    *(long **)(lVar14 + 8) = plVar11;
    *plVar11 = lVar14;
    plVar11 = *(long **)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar11 = *(long **)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar11 != (long *)(param_1 + 0x70)) { // [自动静态注释] 循环/迭代
    plVar12 = (long *)plVar11[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar14 = *plVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(*plVar11 + 8) = plVar12;
    *plVar12 = *plVar11;
    *(long **)(lVar14 + 8) = plVar11;
    *plVar11 = lVar14;
    plVar11 = *(long **)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00691b68(param_1 + 0x30,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  (*param_3)(*(undefined8 *)(param_1 + 0x18),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x18) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1bf0),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x1bf0) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1bf8),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x1bf8) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c00),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x1c00) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c08),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x1c08) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c10),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x1c10) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c18),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x1c18) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c20),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x1c20) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c28),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x1c28) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c30),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x1c30) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c38),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x1c38) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c40),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x1c40) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c48),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x1c48) = 0;
  if (*(char *)(param_1 + 0x1ec1) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__006f5bc0(param_1 + 0x1d30,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006f5a34(param_1 + 0x1c58,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(param_1 + 0x1e98) == param_1 + 0x1d78) { // [自动静态注释] 条件判断/分支
      FUN__text__006ee718(*(long *)(param_1 + 0x1e98),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (*(long *)(param_1 + 0x1e98) != param_1 + 0x1d78) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__0069011c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x1e98) != param_1 + 0x1d78) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0069011c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*param_3)(*(undefined8 *)(param_1 + 0x20),param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x20) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


