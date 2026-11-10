/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005F4E30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f4e30; name: FUN_.text__006f4e30
 */


void FUN__text__006f4e30(long *param_1,undefined8 param_2,byte *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(byte *)((long)param_1 + 0x41) = *param_3;
  uVar2 = *(ushort *)(param_3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (uint)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 1) = (uint)uVar2;
  puVar11 = *(undefined4 **)(param_3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = *(undefined4 **)(param_3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 2) = *puVar11;
  *(undefined4 *)((long)param_1 + 0x14) = puVar11[1];
  *(undefined4 *)(param_1 + 3) = puVar11[2];
  *(undefined4 *)((long)param_1 + 0x1c) = puVar11[3];
  param_1[4] = (long)(double)(float)puVar11[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = (long)(double)(float)puVar11[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar5 = 0x7fffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 7) = 0x7fffffff;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(param_1 + 6) = *puVar3;
    *(undefined4 *)((long)param_1 + 0x34) = puVar3[1];
    *(undefined4 *)(param_1 + 7) = puVar3[2];
    uVar5 = puVar3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)((long)param_1 + 0x3c) = uVar5;
  lVar6 = (ulong)*(ushort *)(param_3 + 2) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined4 *)(*param_1 + lVar6 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (1 < uVar2) { // [自动静态注释] 条件判断/分支
    puVar9 = (undefined4 *)(*param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar10 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7 = puVar11 + 0x11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar11 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar10 = lVar10 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar9[-2] = puVar7[-5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar9[-1] = puVar7[-4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar9 = puVar7[-3];
      puVar9[1] = puVar7[-2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar9 = puVar9 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar11 = puVar7[-1];
      puVar11[1] = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11 = puVar11 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7 = puVar7 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar10 < (int)uVar4); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (1 < (int)uVar4) { // [自动静态注释] 条件判断/分支
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3 = puVar3 + 0xb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar10 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if ((*param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
        uVar8 = ((int)lVar10 + -1) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1[lVar6 * 2 + (long)(int)(uVar4 + 1)] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = 0x7fffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1[lVar6 * 2 + (long)(int)uVar4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1[lVar6 * 2 + (long)(int)(uVar4 + 2)] = 0x7fffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar1[lVar6 * 2 + (long)(int)uVar4] = puVar3[-3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1[lVar6 * 2 + (long)(int)(uVar4 + 1)] = puVar3[-2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1[lVar6 * 2 + (long)(int)(uVar4 + 2)] = puVar3[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = *puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar8 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar10 = lVar10 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = uVar4 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[lVar6 * 2 + (long)(int)(uVar8 | 3)] = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3 = puVar3 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar10 < (int)param_1[1]); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 8) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


