/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058408C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068408c; name: FUN_.text__0068408c
 */


void FUN__text__0068408c(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = *(long *)(lVar7 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined4 *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar1 = *(byte *)(param_2 + 0xd); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar7 != param_1[1]) { // [自动静态注释] 条件判断/分支
    bVar1 = *(byte *)(param_2 + 0xd) & 0xfb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = *(undefined1 *)(param_2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar7 + 0x18) = lVar5 + -9;
  FUN__text__0067999c(lVar5 + -9,(*(int *)(lVar7 + 0x20) - (int)lVar5) * 0x100); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar5 + -6) = uVar4;
  *(byte *)(lVar5 + -5) = bVar1;
  FUN__text__0067999c(lVar5 + -4,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar2 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((long *)*param_1 == plVar2) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  for (plVar6 = *(long **)*param_1; plVar6 != plVar2; plVar6 = (long *)*plVar6) { // [自动静态注释] 循环/迭代
    lVar7 = plVar6[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6[3] = lVar7 + -9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0067999c(lVar7 + -9,(*(int *)(plVar6 + 4) - (int)lVar7) * 0x100); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined2 *)(lVar7 + -6) = 9;
    FUN__text__0067999c(lVar7 + -4,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar7 = plVar2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[3] = lVar7 + -9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0067999c(lVar7 + -9,((int)plVar2[4] - (int)lVar7) * 0x100); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined2 *)(lVar7 + -6) = 0x409;
  FUN__text__0067999c(lVar7 + -4,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


