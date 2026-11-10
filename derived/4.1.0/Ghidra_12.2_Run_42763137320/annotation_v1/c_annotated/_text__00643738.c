/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00543738
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00643738; name: FUN_.text__00643738
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00643738(uint param_1,ushort param_2,byte *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 extraout_w1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 extraout_var; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar2 = (param_1 & 0xfffffffe) != 0x402; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)param_1 < 0x402 && bVar2) { // [自动静态注释] 条件判断/分支
    uVar3 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar3 < 0x1c) { // [自动静态注释] 条件判断/分支
    uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((int)param_1 < 0x402 && bVar2) { // [自动静态注释] 条件判断/分支
      uVar5 = (ulong)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar6 = *(&DAT_00c2ea20)[uVar5 * 4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = (&DAT_00c2ea20)[uVar5 * 4][1] - lVar6 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar3 < uVar5) && (*(long *)(lVar6 + (ulong)uVar3 * 8) != 0)) goto LAB__text__006437b0; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = *DAT_00c2ea20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = DAT_00c2ea20[1] - lVar6 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__006437b0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (uVar3 < uVar5) { // [自动静态注释] 条件判断/分支
    return *(ulong *)(lVar6 + (ulong)uVar3 * 8); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = FUN__text__00643a4c(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_3 = 0;
  if ((int)uVar5 < 0x402) { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined8 *)(_DAT_008a6408 + (uVar5 & 0xffffffff) * 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = (long *)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar4[1] != lVar6) { // [自动静态注释] 条件判断/分支
      bVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (*(long *)(lVar6 + uVar7 * 8) != 0) { // [自动静态注释] 条件判断/分支
          *(short *)(CONCAT44(extraout_var,extraout_w1) + (ulong)bVar8 * 2) = (short)uVar7;
          bVar8 = *param_3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *param_3 = bVar8;
          plVar4 = (long *)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar6 = *plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar7 = uVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar7 < (ulong)(plVar4[1] - lVar6 >> 3)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


