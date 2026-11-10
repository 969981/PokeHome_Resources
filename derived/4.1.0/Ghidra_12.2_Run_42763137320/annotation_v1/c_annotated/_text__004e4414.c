/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E4414
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e4414; name: FUN_.text__004e4414
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004e4414(undefined8 *param_1,int param_2,int param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(int *)(param_1 + 9) = param_2;
  *(int *)((long)param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 10) = param_4;
  plVar4 = (long *)FUN__text__00400f80(5,0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar5 = _DAT_008a4fa0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    *param_1 = 0;
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar4[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar4 + 7) = 0;
  plVar4[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar4 = lVar5 + 0x10;
  plVar4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = plVar4;
  uVar6 = *(undefined8 *)(_DAT_008a4fa8 + (long)param_3 * 8 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = FUN__text__00400f90(5,uVar6,0x1000); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[1] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
    return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*_DAT_008a4b68 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = ((uint)*_DAT_008a4b70 * param_2) / *_DAT_008a4b68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(uint *)(param_1 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = ((uVar1 + uVar2 * 5) - 1) / uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = FUN__text__00400f80(5,(ulong)uVar3 * 0x5f0); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[3] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    *(uint *)(param_1 + 5) = uVar3;
    lVar5 = FUN__text__00400f80(5,(ulong)uVar3 * 0xf08); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[6] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(param_1 + 7) = 0;
      *(undefined4 *)((long)param_1 + 0x3c) = 0;
      *(uint *)(param_1 + 8) = uVar3;
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


