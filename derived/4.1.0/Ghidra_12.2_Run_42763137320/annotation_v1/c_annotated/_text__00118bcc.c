/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00018BCC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00118bcc; name: FUN_.text__00118bcc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00118bcc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar7 = *(long **)(param_1 + 0x408); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0xf0,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar8 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = plVar7;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  FUN__text__0011a198(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
  plVar9 = *(long **)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x50) = lVar5;
  if (plVar9 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar9 + 8))(plVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x58),plVar9,*(undefined8 *)(param_1 + 0x60), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x68));
    lVar5 = *(long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(param_1 + 0x58) = plVar7;
  *(undefined8 *)(param_1 + 0x60) = 0xf0;
  *(undefined8 *)(param_1 + 0x68) = 0x10;
  pcVar6 = *(code **)(lVar5 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar6 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    (*pcVar6)(lVar5 + 0x30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = _DAT_0089feb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = _DAT_0089feb0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = _DAT_0089fea8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = _DAT_0089fea0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar5 + 0x30) = param_1;
  *(undefined8 *)(lVar5 + 0x38) = uVar1;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  uVar1 = _DAT_0089fec0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar5 + 0x10) = uVar2;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar4;
  *(undefined8 *)(lVar5 + 0x28) = uVar1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


