/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00201310
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00301310; name: FUN_.text__00301310
 */


bool FUN__text__00301310(long param_1,uint param_2,uint param_3,long *param_4,uint param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = param_1 + (ulong)param_2 * 0x5fa0 + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = *(int *)(lVar7 + (ulong)param_3 * 0x330 + 0x2e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((-1 < iVar1) && ((param_5 & 1) != 0)) { // [自动静态注释] 条件判断/分支
    return iVar1 != 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    plVar8 = (long *)(lVar6 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar8 + 0x10))(plVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((299 < param_2) || (0x1d < param_3)) goto LAB__text__00301418; // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar8 + 0x10))(plVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar7 = lVar7 + (ulong)param_3 * 0x330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00306b04(lVar6,lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = *(undefined8 *)(lVar7 + 0x2a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(lVar7 + 0x298);
  *(undefined8 *)(lVar6 + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(lVar7 + 0x2a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *)(lVar7 + 0x2b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(undefined8 *)(lVar7 + 0x2c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar6 + 0x80) = *(undefined8 *)(lVar7 + 0x2b8);
  *(undefined8 *)(lVar6 + 0x88) = uVar5;
  *(undefined8 *)(lVar6 + 0x70) = uVar3;
  *(undefined8 *)(lVar6 + 0x78) = uVar4;
  uVar3 = *(undefined8 *)(lVar7 + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *)(lVar7 + 0x2d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(undefined8 *)(lVar7 + 0x2e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(lVar7 + 0x2c8);
  *(undefined8 *)(lVar6 + 0x98) = uVar3;
  *(undefined8 *)(lVar6 + 0xa0) = uVar4;
  *(undefined8 *)(lVar6 + 0xa8) = uVar5;
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__00301418: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar2 = FUN__text__00306588(*param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar2 & 1) == 0) && // [自动静态注释] 条件判断/分支
     (((param_5 & 1) != 0 || (uVar2 = FUN__text__00306a08(*param_4,2), (uVar2 & 1) == 0)))) { // [自动静态注释] 调用尚未恢复正式名称的函数
    return true; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return false; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


