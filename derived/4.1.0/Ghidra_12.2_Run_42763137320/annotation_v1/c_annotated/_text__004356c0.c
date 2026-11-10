/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003356C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004356c0; name: FUN_.text__004356c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__004356c0(undefined8 param_1,ulong param_2,ulong param_3,long param_4,uint param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 auStack_230 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = -((ulong)param_5 * 0xc + 0xf & 0x1ffffffff0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_5 != 0) { // [自动静态注释] 条件判断/分支
    uVar6 = (ulong)param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar9 = (undefined4 *)((long)auStack_230 + lVar3 + 0x208); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7 = (undefined4 *)(param_4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar6 = uVar6 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar9[-2] = puVar7[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar9[-1] = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar9 = 9;
      puVar9 = puVar9 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7 = puVar7 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar6 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((((param_2 & 0xff00000000) != 0x800000000) && ((param_2 & 0xffffffff) != 0)) && // [自动静态注释] 条件判断/分支
      ((param_3 & 0xff00000000) != 0x800000000)) && ((param_3 & 0xffffffff) != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = param_3 >> 0x20 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar8 = (long *)(*_DAT_008a45f0 + uVar6 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(uint *)(plVar8 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__004357a8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar8 = (long *)FUN__text__00434fac(*_DAT_008a45f0, // [自动静态注释] 调用尚未恢复正式名称的函数
                                           param_3 & 0xffffff0000000000 | // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                           param_3 & 0xffffffff | uVar6 << 0x20); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar8 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = (uint)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
        uVar2 = uVar5 / uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      plVar8 = (long *)(*plVar8 + (ulong)(uVar5 - uVar2 * uVar1) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        plVar8 = (long *)*plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar8 == (long *)0x0) goto LAB__text__004357a8; // [自动静态注释] 条件判断/分支
      } while (*(uint *)(plVar8 + 1) != uVar5); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = FUN__text__00437ed8(param_2,plVar8,(long)auStack_230 + lVar3 + 0x200,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00437660(plVar8,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


