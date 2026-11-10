/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0020C650
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030c650; name: FUN_.text__0030c650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0030c650(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = DAT_008e55f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined4 *)(DAT_008e55f8 + 0xf00094); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = FUN__text__00325bc0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = *(undefined8 *)(lVar6 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined8 *)(lVar6 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(lVar6 + 0x2c) == 1) { // [自动静态注释] 条件判断/分支
    uVar7 = 0x3f003a34000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(int *)(lVar6 + 0x2c) != 2) goto LAB__text__0030c6d8; // [自动静态注释] 条件判断/分支
    uVar7 = 0x187003a36000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(ulong *)(lVar5 + 0xf00098) = uVar7 | 0x100000000000000;
LAB__text__0030c6d8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(lVar5 + 0xf000a0) = 0x100000;
  *(undefined8 *)(lVar5 + 0x68) = uVar2;
  *(undefined8 *)(lVar5 + 0x70) = uVar3;
  memset((void *)(lVar5 + 0x90),0,0xf00000); // [自动静态注释] 内存复制、清零或移动
  plVar4 = _DAT_008a2b38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar9 = *(long **)(*_DAT_008a2b38 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar9 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(plVar9[10] + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*plVar9 + 0x38))(plVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (**(code **)(plVar9[10] + 0x18))(plVar9 + 10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar6 = *(long *)(*plVar4 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar6 + 0x50) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00310610(lVar6,(void *)(lVar5 + 0x90)); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(lVar6 + 0x50) + 0x18))((long *)(lVar6 + 0x50)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00240ddc(&local_28,*(undefined8 *)(lVar5 + 0x50),0x734668); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(lVar5 + 0x58) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(lVar5 + 0x58) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *puVar1 = 0;
  *(long *)(lVar5 + 0x58) = local_28;
  pcVar8 = *(code **)(local_28 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar8 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(local_28 + 0x380) = 0;
    *(undefined8 *)(local_28 + 0x388) = 0;
    *(undefined8 *)(local_28 + 0x370) = 0;
    *(undefined8 *)(local_28 + 0x378) = 0;
    (*pcVar8)(local_28 + 0x390); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(local_28 + 0x394) = 0;
  *(undefined1 *)(local_28 + 0x390) = 1;
  uVar3 = _DAT_008a2b60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(local_28 + 0x398) = lVar5;
  uVar2 = _DAT_008a2b58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(local_28 + 0x370) = uVar3;
  uVar3 = _DAT_008a2b68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(local_28 + 0x378) = uVar2;
  uVar2 = _DAT_008a2b70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(local_28 + 0x380) = uVar3;
  *(undefined8 *)(local_28 + 0x388) = uVar2;
  FUN__text__005e896c(*(undefined8 *)(lVar5 + 0x58),0x71746e,0xffffffff,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


