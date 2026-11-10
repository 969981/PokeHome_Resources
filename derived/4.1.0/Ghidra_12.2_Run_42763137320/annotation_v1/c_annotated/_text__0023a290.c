/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0013A290
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023a290; name: FUN_.text__0023a290
 */


void FUN__text__0023a290(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_60 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pcVar3 = *(code **)(param_1 + 0x668); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x670) = 0;
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined8 *)(param_1 + 0x668) = 0;
    (*pcVar3)(param_1 + 0x680); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x680) = param_1;
  *(code **)(param_1 + 0x660) = FUN__text__0023b09c;
  *(undefined **)(param_1 + 0x668) = &DAT__text__0023b0c4;
  *(undefined1 **)(param_1 + 0x670) = &LAB__text__0023b0c8;
  *(undefined1 **)(param_1 + 0x678) = &LAB__text__0023b0d4;
  FUN__text__001156d0(local_60,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = *(long *)(local_60[0] + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (local_60[0] == 0) goto LAB__text__0023a340; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__0023a340: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar5 = *(long *)(param_1 + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = param_1 + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    plVar6 = (long *)(lVar5 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar6 + 0x10))(plVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*plVar6 + 0x18))(plVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003c7c60(lVar5,0x72b828,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar5 = FUN__text__0012cb14(lVar1,0x72b830); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0x200000000;
  uVar2 = FUN__text__0012cb14(lVar1,0x72b830); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005e927c(local_60,0x8738f8); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a1de4(uVar2,local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x72b838); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003d13e8(param_1 + 0x6e0,uVar7,uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x72b840); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0xd40) = uVar2;
  FUN__text__0012bcbc(lVar1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


