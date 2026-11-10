/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00369E50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00469e50; name: FUN_.text__00469e50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00469e50(long param_1,long param_2,undefined8 *param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(uint *)(param_1 + 0xd2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)FUN__text__00400f80(0,0x98); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0046bd38(plVar2,&local_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(plVar2 + 0x12) = 0;
  plVar2[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = _DAT_008a4aa0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar2 + 0xf) = 0;
  *plVar2 = lVar5 + 0x10;
  FUN__text__00463320(plVar2,param_1,param_2,param_4,uVar1 >> 10 & 1,uVar1 >> 0xb & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar6 = *(long **)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)*plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(plVar6 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__00469f3c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar4 != plVar3 + (ulong)uVar1 * 2) { // [自动静态注释] 条件判断/分支
      plVar4 = plVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__00469f98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar5 = uVar7 << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*plVar4 == param_2) goto LAB__text__00469f3c; // [自动静态注释] 条件判断/分支
      plVar4 = plVar4 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = lVar5 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar5 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (*(uint *)((long)plVar6 + 0xc) <= uVar1) { // [自动静态注释] 条件判断/分支
    uVar7 = FUN__text__0046b870(plVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (((uVar7 & 1) == 0) || (*(uint *)((long)plVar6 + 0xc) <= uVar1)) goto LAB__text__00469fa8; // [自动静态注释] 条件判断/分支
    uVar7 = (ulong)*(uint *)(plVar6 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)*plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(plVar6 + 1) = (int)uVar7 + 1;
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar3[uVar7 * 2] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = plVar3 + uVar7 * 2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar4 = 0;
LAB__text__00469f98: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *plVar4 = (long)plVar2;
    *param_3 = plVar4;
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00469fa8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *param_3 = 0;
  if (plVar2[0xd] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(plVar2 + 0xe) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar2[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)plVar2 + 0x74) = 0;
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*plVar2 + 0x10))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00400fc0(0,plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


