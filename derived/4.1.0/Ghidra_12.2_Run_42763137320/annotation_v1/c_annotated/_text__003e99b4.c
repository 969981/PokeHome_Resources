/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002E99B4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e99b4; name: FUN_.text__003e99b4
 */


void FUN__text__003e99b4(long param_1,uint param_2,undefined8 param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(uint *)(param_1 + 0x2b8) <= param_2) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = (ulong)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__003eb460(*(long *)(param_1 + 0x298) + uVar7 * 0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar1 & 1) != 0) && (param_2 < *(uint *)(param_1 + 0x2b8))) { // [自动静态注释] 条件判断/分支
    lVar4 = *(long *)(param_1 + 0x298) + uVar7 * 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = FUN__text__003eb460(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__003eb540(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar2 = (long *)FUN__text__003eb74c(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = FUN__text__003eb744(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar2 + 0x18))(plVar2,uVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__003eb334(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = *(long *)(param_1 + 0xc0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = FUN__text__006a0f04(0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006973d8(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar6 = (long *)(lVar5 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = (long *)(lVar4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar2 = *plVar6;
    *(long **)(lVar5 + 8) = plVar6;
    *(long **)(*plVar6 + 8) = plVar2;
    *plVar6 = lVar5;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003eb350(*(long *)(param_1 + 0x298) + uVar7 * 0x40,*(undefined8 *)(param_1 + 0xc0), // [自动静态注释] 调用尚未恢复正式名称的函数
                      lVar4,*(undefined8 *)(param_1 + 0x2c0),param_3,*(undefined8 *)(param_1 + 0xc0) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__003eb470(*(long *)(param_1 + 0x298) + uVar7 * 0x40,*(undefined8 *)(param_1 + 0xc0), // [自动静态注释] 调用尚未恢复正式名称的函数
                      param_4 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


