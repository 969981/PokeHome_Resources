/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A9788
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a9788; name: FUN_.text__005a9788
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a9788(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_88 [68]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_008a5698; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_24 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *_DAT_008a0448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (*(code *)*_DAT_008a5698)(uVar5,0x51,&local_24); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(ulong *)(param_1 + 0x98) < (ulong)(long)local_24) { // [自动静态注释] 条件判断/分支
    *(long *)(param_1 + 0x98) = (long)local_24;
  } // [自动静态注释] 作用域/控制流边界
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (*(code *)*puVar1)(uVar5,0x50,&local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = *(ulong *)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (ulong)local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar3 != 0) { // [自动静态注释] 条件判断/分支
    uVar7 = uVar4 / uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar4 != uVar7 * uVar3) { // [自动静态注释] 条件判断/分支
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 != 0) { // [自动静态注释] 条件判断/分支
      uVar7 = ((uVar4 + uVar3) - 1) / uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(ulong *)(param_1 + 0x98) = uVar7 * uVar3;
  } // [自动静态注释] 作用域/控制流边界
  local_44 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (*(code *)*puVar1)(uVar5,0x56,&local_44); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(ulong *)(param_1 + 0xa0) < (ulong)(long)local_44) { // [自动静态注释] 条件判断/分支
    *(long *)(param_1 + 0xa0) = (long)local_44;
  } // [自动静态注释] 作用域/控制流边界
  (*(code *)*_DAT_008a56a0)(auStack_88,uVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a56a8)(auStack_88); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a56b0)(auStack_88,*(undefined8 *)(param_1 + 0x98)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a56b8)(auStack_88,*(undefined8 *)(param_1 + 0xa0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a56c0)(param_1 + 0x1e0,auStack_88); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__006ebf24(param_1 + 0x21e0,param_1 + 0x1e0,_DAT_008a0448); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar7 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar6 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(undefined8 *)(*_DAT_008a0228 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = plVar6;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  lVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,0x110,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar6 + 0xb8))(plVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0059fe10(lVar2,0,7,0,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar2 + 8) = plVar6;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x110;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x160) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x160) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x160) = lVar2;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


