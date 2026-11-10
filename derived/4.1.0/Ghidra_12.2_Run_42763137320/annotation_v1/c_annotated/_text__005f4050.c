/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F4050
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f4050; name: FUN_.text__005f4050
 */


void FUN__text__005f4050(long *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar4 = FUN__text__005f324c(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(int *)((long)param_1 + 0xb4) = iVar4;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  uVar8 = 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0x200 < iVar4 + 1U) { // [自动静态注释] 条件判断/分支
    uVar8 = iVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x17) = 0;
  local_24 = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_1[0xf] != 0) { // [自动静态注释] 条件判断/分支
    uVar5 = FUN__text__005f3254(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (uVar5 < uVar8) { // [自动静态注释] 条件判断/分支
      lVar6 = param_1[0xf]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar6 == 0) goto LAB__text__005f40cc; // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar6 = param_1[0xf]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_1[0xf] != 0) goto LAB__text__005f40f8; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
LAB__text__005f40cc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00163d7c(&local_48,param_1[1],&local_24); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1[0xf] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[0xf] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005f40f8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__005f3280(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f3244(param_1[0xf]); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__005f3600(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)((long)param_1 + 0x99) = uVar3;
  *(undefined1 *)((long)param_1 + 0x9b) = 0;
  *(undefined1 *)((long)param_1 + 0xa3) = 0;
  *(undefined4 *)(param_1 + 0x15) = 4;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  uVar7 = FUN__text__005f3244(param_1[0xf]); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f3720(uVar7,*(undefined1 *)((long)param_1 + 0x9b)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((char)param_1[0x13] != '\0') { // [自动静态注释] 条件判断/分支
    lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar1 = param_1[0xb] + lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x18);
      *(char *)(param_1[0xb] + lVar6 + 0x92) = (char)uVar10;
      plVar2 = (long *)(param_1[0xb] + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar9 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = plVar2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(lVar9 + 0x30) = plVar2[2];
      *(int *)(lVar9 + 0x38) = (int)lVar1;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      (**(code **)(**(long **)(param_1[0xb] + lVar6) + 0x148)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1[0xb] + lVar6),0x757d88,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar10 = uVar10 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar2 = (long *)(param_1[0xb] + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar6 + 0xa0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)(*plVar2 + 0x59) = 0xff;
    } while (uVar10 < *(byte *)(param_1 + 0x13)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)((long)param_1 + 0x9f) = 0;
  FUN__text__005f47e8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*param_1 + 0x80))(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


