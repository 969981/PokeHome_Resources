/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0055A050
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065a050; name: FUN_.text__0065a050
 */


void FUN__text__0065a050(long param_1,long param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar12 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar9 = *(long *)(param_1 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar9 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  auVar12 = FUN__text__0066c6a8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = auVar12._0_8_ + param_2 / 1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = auVar12._8_4_ + ((int)param_2 + (int)(param_2 / 1000) * -1000) * 1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (999999 < (int)uVar3) { // [自动静态注释] 条件判断/分支
    lVar1 = lVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 - 1000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = auVar12._8_8_ & 0xffffffff00000000 | (ulong)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0065ca34(param_1,(ulong)param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar11 = param_1 + (ulong)param_3 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = (undefined8 *)(param_1 + 0x12d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar11 + 0x1310) = lVar1;
  *(ulong *)(lVar11 + 0x1318) = uVar7;
  *(uint *)(lVar11 + 0x1320) = param_3;
  lVar5 = FUN__text__00656c60(puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((lVar5 != 0) && (plVar10 = (long *)*puVar2, plVar10 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    iVar4 = FUN__text__0066c6d8(*(undefined8 *)(*plVar10 + 0x18),*(undefined8 *)(*plVar10 + 0x20), // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined8 *)(lVar11 + 0x1310),*(undefined8 *)(lVar11 + 0x1318));
    if (iVar4 < 1) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        plVar8 = plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar10 = (long *)plVar8[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar10 == (long *)0x0) break; // [自动静态注释] 条件判断/分支
        iVar4 = FUN__text__0066c6d8(*(undefined8 *)(*plVar10 + 0x18), // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined8 *)(*plVar10 + 0x20),
                                    *(undefined8 *)(lVar11 + 0x1310),
                                    *(undefined8 *)(lVar11 + 0x1318));
      } while (iVar4 < 1); // [自动静态注释] 循环/迭代
      goto LAB__text__0065a138; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  plVar8 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0065a138: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar5 = param_1 + (ulong)param_3 * 0x30 + 0x12f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00656b20(puVar2,plVar8,lVar5,lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((*(long *)(param_1 + 0x1290) != 0) || (*(int *)(param_1 + 0x1298) != 0)) { // [自动静态注释] 条件判断/分支
    iVar4 = FUN__text__0066c6d8(lVar1,uVar7,*(long *)(param_1 + 0x1290), // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined8 *)(param_1 + 0x1298));
    if (0 < iVar4) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    iVar4 = FUN__text__0066c120(*(undefined8 *)(lVar9 + 0xb0),param_1 + 0x12a0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar4 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__00666f74(param_1,0x70f1b1,iVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x1290) = lVar1;
  *(ulong *)(param_1 + 0x1298) = uVar7;
  *(long *)(param_1 + 0x12d0) = param_1;
  uVar6 = FUN__text__0066bf98(lVar1,uVar7,*(undefined8 *)(lVar9 + 0xb0),param_1 + 0x12a0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar9 + 0xb0) = uVar6;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


