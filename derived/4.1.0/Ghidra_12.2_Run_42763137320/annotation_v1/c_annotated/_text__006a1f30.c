/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A1F30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a1f30; name: FUN_.text__006a1f30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a1f30(long param_1,undefined8 *param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__006a4ea0(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = param_3 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006a5220(param_2 + 0xf); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_2[0x14] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[0x15] = param_2 + 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined8 *)(*DAT_00c5faa8)(0x10,4,*_DAT_008a6970); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *puVar3 = 0x89e950;
    puVar3[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_2[0x1a] = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(short *)(param_3 + 0x40) != 0) { // [自动静态注释] 条件判断/分支
    lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1 = param_2 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar4 = (long *)FUN__text__006a50c0(param_1,*(long *)(param_3 + 0x28) + lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar5 = *plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = uVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar6 + 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar4 = *plVar1;
      *(long **)(lVar5 + 8) = plVar1;
      *(long **)(*plVar1 + 8) = plVar4;
      *plVar1 = lVar5;
    } while (uVar7 < *(ushort *)(param_3 + 0x40)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (*(short *)(param_3 + 0x42) != 0) { // [自动静态注释] 条件判断/分支
    lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__006caa10(param_2 + 0x14,*(long *)(param_3 + 0x30) + lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar7 = uVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar6 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar7 < *(ushort *)(param_3 + 0x42)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = *(ushort *)(param_3 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[0x18] = *(undefined8 *)(param_3 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_2 + 0x19) = (uint)uVar2;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


