/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C2FC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c2fc0; name: FUN_.text__006c2fc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c2fc0(long *param_1,long *param_2,undefined8 param_3,long param_4,long param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__006b2060(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar11 = _DAT_008a6928; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar8 = param_1 + 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x10a) = 0;
  param_1[0x24] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 0xd2) = 0;
  *(undefined8 *)((long)param_1 + 0xda) = 0;
  *param_1 = lVar11 + 0x10;
  FUN__text__0069d6f4(plVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  FUN__text__0069d6f4(plVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)((long)param_1 + 0xec) = 0xffffffff;
  FUN__text__0069d6f4(plVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  FUN__text__0069d6f4(plVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)((long)param_1 + 0xf4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x10a) = 0;
  param_1[0x24] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x22] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x23] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar11 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(short *)(param_6 + 0x44) != 0 || param_5 == 0) { // [自动静态注释] 条件判断/分支
    lVar11 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(byte *)(param_1 + 0x21) = *(byte *)(lVar11 + 0x65) >> 2 & 3;
  bVar4 = *(byte *)(lVar11 + 0x65); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar12 = (bVar4 >> 1 & 1) != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((bool)bVar12) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)((long)param_1 + 0x10a) = 1;
    bVar4 = *(byte *)(lVar11 + 0x65); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((bVar4 & 1) != 0) { // [自动静态注释] 条件判断/分支
    bVar12 = bVar12 | 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)((long)param_1 + 0x10a) = bVar12;
    bVar4 = *(byte *)(lVar11 + 0x65); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((bVar4 >> 4 & 1) != 0) { // [自动静态注释] 条件判断/分支
    *(byte *)((long)param_1 + 0x10a) = bVar12 | 4;
  } // [自动静态注释] 作用域/控制流边界
  puVar1 = (undefined4 *)(lVar11 + (ulong)*(uint *)(lVar11 + 0x68)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar12 = *(byte *)((long)puVar1 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (2 < bVar12) { // [自动静态注释] 条件判断/分支
    bVar12 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (bVar12 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0069d730(plVar8,bVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006c3530(param_1,lVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x1d) = *puVar1;
  *(undefined4 *)((long)param_1 + 0xec) = puVar1[1];
  *(undefined4 *)(param_1 + 0x1e) = puVar1[2];
  *(undefined4 *)((long)param_1 + 0xf4) = puVar1[3];
  if ((bVar12 != 0) && ((char)param_1[0x1f] != '\0')) { // [自动静态注释] 条件判断/分支
    FUN__text__0069d860(plVar8,puVar1 + 5,bVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x30), // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined2 *)(param_4 + (ulong)*(uint *)(param_4 + 0x68) + 0x10));
  if (param_5 == 0) { // [自动静态注释] 条件判断/分支
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar8 = (long *)FUN__text__006a0f04(0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar7 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x38), // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined2 *)(param_5 + (ulong)*(uint *)(param_5 + 0x68) + 0x10));
    plVar8 = (long *)FUN__text__006a0f04(0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (plVar8 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    *plVar8 = _DAT_008a69f0 + 0x10;
    FUN__text__006a9930(plVar8,param_2,param_3,uVar6,uVar7,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x23] = (long)plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ab450(plVar8,param_2,param_3,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)((long)param_1 + 0x109) = 0;
  param_1[0x22] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar12 = *(byte *)(lVar11 + 100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar12 != 0) { // [自动静态注释] 条件判断/分支
    plVar8 = param_1 + 0x22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar9 = FUN__text__006a0f04((ulong)bVar12 << 4); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar9 == 0) { // [自动静态注释] 条件判断/分支
      *plVar8 = 0;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (bVar12 == 1) { // [自动静态注释] 条件判断/分支
        uVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar15 = (undefined1 *)(lVar9 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          uVar14 = uVar14 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar15[-0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(puVar15 + -8) = 0;
          *puVar15 = 0;
          *(undefined8 *)(puVar15 + 8) = 0;
          puVar15 = puVar15 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (((ulong)bVar12 & 0xfe) != uVar14); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      if ((bVar12 & 1) != 0) { // [自动静态注释] 条件判断/分支
        puVar15 = (undefined1 *)(lVar9 + uVar14 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar15 = 0;
        *(undefined8 *)(puVar15 + 8) = 0;
      } // [自动静态注释] 作用域/控制流边界
      param_1[0x22] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)param_1 + 0x109) = bVar12;
    } // [自动静态注释] 作用域/控制流边界
    lVar9 = lVar11 + (ulong)*(uint *)(lVar11 + 0x6c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = param_4 + (ulong)*(uint *)(param_4 + 0x6c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_5 == 0) { // [自动静态注释] 条件判断/分支
      if ('\0' < *(char *)((long)param_1 + 0x109)) { // [自动静态注释] 条件判断/分支
        lVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          *(undefined1 *)(*plVar8 + lVar16) =
               *(undefined1 *)(lVar11 + 2 + (ulong)*(uint *)(lVar9 + uVar14 * 4));
          if (uVar14 < *(byte *)(param_4 + 100)) { // [自动静态注释] 条件判断/分支
            uVar6 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x30), // [自动静态注释] 调用尚未恢复正式名称的函数
                                        *(undefined2 *)
                                         (param_4 + (ulong)*(uint *)(lVar2 + uVar14 * 4))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            puVar10 = (undefined8 *)FUN__text__006a0f04(0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar10 = (undefined8 *)FUN__text__006a0f04(0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          if (puVar10 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
            *puVar10 = 0x89dc28;
            FUN__text__006a9930(puVar10,param_2,param_3,uVar6,0,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          *(undefined8 **)(param_1[0x22] + lVar16 + 8) = puVar10;
          FUN__text__006ab450(*(undefined8 *)(param_1[0x22] + lVar16 + 8),param_2,param_3,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar14 = uVar14 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar16 = lVar16 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while ((long)uVar14 < (long)*(char *)((long)param_1 + 0x109)); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if ('\0' < *(char *)((long)param_1 + 0x109)) { // [自动静态注释] 条件判断/分支
      uVar3 = *(uint *)(param_5 + 0x6c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        *(undefined1 *)(*plVar8 + lVar16) =
             *(undefined1 *)(lVar11 + 2 + (ulong)*(uint *)(lVar9 + uVar14 * 4));
        if (uVar14 < *(byte *)(param_4 + 100)) { // [自动静态注释] 条件判断/分支
          uVar6 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x30), // [自动静态注释] 调用尚未恢复正式名称的函数
                                      *(undefined2 *)
                                       (param_4 + (ulong)*(uint *)(lVar2 + uVar14 * 4))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar7 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x38), // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined2 *)
                                     (param_5 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                     (ulong)*(uint *)(param_5 + (ulong)uVar3 + uVar14 * 4))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar10 = (undefined8 *)FUN__text__006a0f04(0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (puVar10 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          *puVar10 = 0x89dc28;
          FUN__text__006a9930(puVar10,param_2,param_3,uVar6,uVar7,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        *(undefined8 **)(param_1[0x22] + lVar16 + 8) = puVar10;
        FUN__text__006ab450(*(undefined8 *)(param_1[0x22] + lVar16 + 8),param_2,param_3,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar14 = uVar14 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar16 = lVar16 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while ((long)uVar14 < (long)*(char *)((long)param_1 + 0x109)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)(lVar11 + 100) == '\x01') { // [自动静态注释] 条件判断/分支
      bVar5 = 1 < *(byte *)(param_1 + 0x21) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar5) { // [自动静态注释] 条件判断/分支
        uVar6 = 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar13 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (!bVar5) { // [自动静态注释] 条件判断/分支
        uVar13 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar11 = FUN__text__006a0f04(uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      param_1[0x24] = lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(param_1 + 0x25) = uVar13;
      if (param_2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        lVar11 = FUN__text__006c1690(param_3,0x10,0x230); // [自动静态注释] 调用尚未恢复正式名称的函数
        *param_2 = *param_2 + lVar11 * (ulong)*(uint *)(param_1 + 0x25);
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


