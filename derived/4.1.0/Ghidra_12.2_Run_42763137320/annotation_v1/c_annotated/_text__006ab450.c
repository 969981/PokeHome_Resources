/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005AB450
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ab450; name: FUN_.text__006ab450
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ab450(long param_1,undefined8 param_2,undefined8 param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar5 = _DAT_008a6a00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar4 = _DAT_008a69f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = _DAT_008a68a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(param_1 + 0x14) & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
    lVar11 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar1 = (ushort *)(lVar11 + uVar13 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*puVar1 >> 8 & 1) != 0) { // [自动静态注释] 条件判断/分支
        plVar12 = *(long **)(puVar1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar7 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (((*_DAT_008a6898 & 1) == 0) && (iVar6 = __cxa_guard_acquire(_DAT_008a6898), iVar6 != 0)) // [自动静态注释] 条件判断/分支
        { // [自动静态注释] 作用域/控制流边界
          if (((*_DAT_008a68a8 & 1) == 0) && // [自动静态注释] 条件判断/分支
             (iVar6 = __cxa_guard_acquire(_DAT_008a68a8), iVar6 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *_DAT_008a68b0 = 0;
            __cxa_guard_release(_DAT_008a68a8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          *puVar3 = _DAT_008a68b0;
          __cxa_guard_release(_DAT_008a6898); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        if (puVar7 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__006ab528: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar7 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar8 = (undefined8 *)(**(code **)*puVar7)(puVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar8 != puVar3) { // [自动静态注释] 条件判断/分支
            do { // [自动静态注释] 循环/迭代
              puVar8 = (undefined8 *)*puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } while (puVar8 != puVar3 && puVar8 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
            if (puVar8 == (undefined8 *)0x0) goto LAB__text__006ab528; // [自动静态注释] 条件判断/分支
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (((*pbVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar4), iVar6 != 0)) { // [自动静态注释] 条件判断/分支
          if (((*_DAT_008a68a8 & 1) == 0) && // [自动静态注释] 条件判断/分支
             (iVar6 = __cxa_guard_acquire(_DAT_008a68a8), iVar6 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *_DAT_008a68b0 = 0;
            __cxa_guard_release(_DAT_008a68a8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          *puVar5 = _DAT_008a68b0;
          __cxa_guard_release(pbVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        if (puVar8 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__006ab578: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar8 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar9 = (undefined8 *)(**(code **)*puVar8)(puVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar9 != puVar5) { // [自动静态注释] 条件判断/分支
            do { // [自动静态注释] 循环/迭代
              puVar9 = (undefined8 *)*puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } while (puVar9 != puVar5 && puVar9 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
            if (puVar9 == (undefined8 *)0x0) goto LAB__text__006ab578; // [自动静态注释] 条件判断/分支
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        uVar10 = FUN__text__006a4e20(*(undefined8 *)(param_4 + 0xa0),*puVar1 >> 9 & 7); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (puVar7 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          if (puVar8 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
            FUN__text__006a4cb0(uVar10,param_2,param_3,*(long *)(param_4 + 0x20), // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x40),puVar8[2]);
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__006a4b70(uVar10,puVar7[2]); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      uVar13 = uVar13 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar13 != uVar2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


