/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0037CE10
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047ce10; name: FUN_.text__0047ce10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0047ce10(int *param_1,undefined8 param_2,undefined4 param_3,uint param_4,byte param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   uint *param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 2) = param_2;
  *(short *)((long)param_1 + 0x22) = (short)param_3;
  param_1[10] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)((long)param_1 + 0x2d) = param_5 & 1;
  lVar9 = *(long *)(param_6 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar9 != 0) { // [自动静态注释] 条件判断/分支
    plVar8 = *(long **)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar8 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      if (*(ushort *)(plVar8 + 2) - 1 == 0) { // [自动静态注释] 条件判断/分支
        if (*plVar8 != 0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(plVar8 + 1) = 0;
          FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
          *plVar8 = 0;
          *(undefined4 *)((long)plVar8 + 0xc) = 0;
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__00400fc0(0,plVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(short *)(plVar8 + 2) = (short)(*(ushort *)(plVar8 + 2) - 1);
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 4) = lVar9;
    *(short *)(lVar9 + 0x10) = *(short *)(lVar9 + 0x10) + 1;
    uVar5 = *param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(short *)(param_1 + 8) = (short)uVar5;
    *(ulong *)(param_1 + 6) = *(long *)(param_1 + 2) + (ulong)(uVar5 & 0xffff) * 0x18;
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = param_2;
  lVar9 = FUN__text__0047d070(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar8 = *(long **)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar8 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    if (*(ushort *)(plVar8 + 2) - 1 != 0) { // [自动静态注释] 条件判断/分支
      *(short *)(plVar8 + 2) = (short)(*(ushort *)(plVar8 + 2) - 1);
      *(long *)(param_1 + 4) = lVar9;
      goto joined_r0x0047ceec; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*plVar8 != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(plVar8 + 1) = 0;
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *plVar8 = 0;
      *(undefined4 *)((long)plVar8 + 0xc) = 0;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00400fc0(0,plVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 4) = lVar9;
joined_r0x0047ceec: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (lVar9 != 0) { // [自动静态注释] 条件判断/分支
    *(short *)(lVar9 + 0x10) = *(short *)(lVar9 + 0x10) + 1;
    plVar8 = *(long **)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar8 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      if ((param_4 & 1) == 0) { // [自动静态注释] 条件判断/分支
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar9 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *_DAT_008a45e8 = lVar9;
      uVar2 = *(ushort *)((long)param_1 + 0x22); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = (uint)((ulong)lVar9 >> 0x21); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
        uVar3 = uVar5 / uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar5 = uVar5 - uVar3 * uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = (ulong)uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(short *)(param_1 + 8) = (short)uVar5;
      if ((*(byte *)(param_1 + 10) >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
        *(ulong *)(param_1 + 6) = *(long *)(param_1 + 2) + (ulong)uVar5 * 0x18;
      } // [自动静态注释] 作用域/控制流边界
      uVar5 = *(uint *)(plVar8 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
        uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar4 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          while (bVar4) { // [自动静态注释] 循环/迭代
            pcVar1 = (char *)(*plVar8 + uVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar7 = uVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            bVar4 = *pcVar1 != '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (uVar7 == uVar5) { // [自动静态注释] 条件判断/分支
              if (*pcVar1 != '\0') { // [自动静态注释] 条件判断/分支
                uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                do { // [自动静态注释] 循环/迭代
                  *(undefined1 *)(*plVar8 + uVar6) = 0;
                  uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } while (uVar6 < *(uint *)(plVar8 + 1)); // [自动静态注释] 循环/迭代
                plVar8 = *(long **)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar6 = (ulong)*(ushort *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              goto LAB__text__0047d044; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          uVar7 = uVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar4 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (uVar7 != uVar5); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
LAB__text__0047d044: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined1 *)(*plVar8 + (uVar6 & 0xffff)) = 1;
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


