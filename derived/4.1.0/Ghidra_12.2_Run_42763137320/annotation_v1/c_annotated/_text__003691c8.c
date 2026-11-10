/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002691C8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003691c8; name: FUN_.text__003691c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003691c8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar8 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_0089f448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = FUN__text__00371260(*_DAT_0089f448,&local_34); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_40 = 0x1f50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar2 = FUN__text__00369ee0(lVar4,_DAT_008a3038,param_1 + 0x60,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((cVar2 == '\0') && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a3038); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = FUN__text__00371260(*puVar1,&local_34); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_40 = 0x50c20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar2 = FUN__text__0036a0c0(lVar4,_DAT_008a3040,param_1 + 0x1fb0,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((cVar2 == '\0') && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a3040); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = FUN__text__00371260(*puVar1,&local_34); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_40 = 0x538; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar2 = FUN__text__0036a2a0(lVar4,_DAT_008a3048,param_1 + 0x52be8,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((cVar2 == '\0') && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a3048); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = FUN__text__00371260(*puVar1,0x8aadf0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar6 = FUN__text__003608a0(lVar4,0x8aadf4); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar6 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar5 + 0x50))(plVar5,0x8aadf4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 0x52bd8) = (int)(uVar6 >> 0x20);
  lVar4 = FUN__text__00371260(uVar7,0x8aadf8); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar6 = FUN__text__003608a0(lVar4,0x8aadfc); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar6 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar5 + 0x50))(plVar5,0x8aadfc); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 0x52bd0) = (int)(uVar6 >> 0x20);
  lVar4 = FUN__text__00371260(uVar7,0x8aae00); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar6 = FUN__text__003608a0(lVar4,0x8aae04); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar6 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar5 + 0x50))(plVar5,0x8aae04); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 0x52bd4) = (int)(uVar6 >> 0x20);
  lVar4 = FUN__text__00371260(uVar7,0x8aae08); // [自动静态注释] 调用尚未恢复正式名称的函数
  auVar8 = FUN__text__0036a480(lVar4,0x8aae0c); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((auVar8._0_8_ & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar5 + 0x50))(plVar5,0x8aae0c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x52be0) = auVar8._8_8_;
  lVar4 = FUN__text__00371260(uVar7,0x8aae10); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__00364040(lVar4,0x8aae14); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar3 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar5 + 0x50))(plVar5,0x8aae14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(bool *)(param_1 + 0x53120) = 0xff < uVar3;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


