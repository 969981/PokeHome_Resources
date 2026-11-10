/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B6400
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b6400; name: FUN_.text__006b6400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b6400(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar9 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined8 *)(lVar9 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(undefined8 *)(lVar9 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined8 *)(lVar9 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *(undefined8 *)(lVar9 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *)(lVar9 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = *(undefined8 *)(lVar9 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_1[1] == 0) && (lVar9 = FUN__text__006b253c(lVar9,3), lVar9 != 0)) { // [自动静态注释] 条件判断/分支
    lVar9 = FUN__text__006b253c(*param_1,3); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[1] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((param_1[0xb] == 0) && (lVar9 = FUN__text__006b253c(*param_1,4), lVar9 != 0)) { // [自动静态注释] 条件判断/分支
    lVar9 = FUN__text__006b253c(*param_1,4); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0xb] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (param_1[1] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_2 + 0x90) = uVar2;
    *(undefined8 *)(param_2 + 0x98) = uVar5;
    *(undefined8 *)(param_2 + 0xa0) = uVar3;
    *(undefined8 *)(param_2 + 0xa8) = uVar6;
    *(undefined8 *)(param_2 + 0x80) = uVar4;
    *(undefined8 *)(param_2 + 0x88) = uVar7;
    *(byte *)(param_2 + 0x194) = *(byte *)(param_2 + 0x194) & 0xdf;
    FUN__text__006b6604(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((long *)param_1[3] == (long *)0x0) { // [自动静态注释] 条件判断/分支
      puVar10 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar1 = *_DAT_008a69f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar10 = (undefined8 *)(**(code **)(*(long *)param_1[3] + 0x48))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar1 = *_DAT_008a69f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (((bVar1 & 1) == 0) && // [自动静态注释] 条件判断/分支
       (iVar8 = __cxa_guard_acquire(_DAT_008a69f8), puVar11 = _DAT_008a68b0, iVar8 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (((*_DAT_008a68a8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(_DAT_008a68a8), iVar8 != 0)) { // [自动静态注释] 条件判断/分支
        *puVar11 = 0;
        __cxa_guard_release(_DAT_008a68a8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *_DAT_008a6a00 = puVar11;
      __cxa_guard_release(_DAT_008a69f8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (puVar10 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar11 = (undefined8 *)(**(code **)*puVar10)(puVar10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar11 != _DAT_008a6a00) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          puVar11 = (undefined8 *)*puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (puVar11 != _DAT_008a6a00 && puVar11 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
        if (puVar11 == (undefined8 *)0x0) goto LAB__text__006b6540; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      *(byte *)(puVar10 + 0x2b) = *(byte *)(puVar10 + 0x2b) | 2;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__006b6540: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (param_1[0xb] == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_2 + 0x90) = uVar2;
  *(undefined8 *)(param_2 + 0x98) = uVar5;
  *(undefined8 *)(param_2 + 0xa0) = uVar3;
  *(undefined8 *)(param_2 + 0xa8) = uVar6;
  *(undefined8 *)(param_2 + 0x80) = uVar4;
  *(undefined8 *)(param_2 + 0x88) = uVar7;
  *(byte *)(param_2 + 0x194) = *(byte *)(param_2 + 0x194) & 0xdf;
  FUN__text__006b67dc(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


