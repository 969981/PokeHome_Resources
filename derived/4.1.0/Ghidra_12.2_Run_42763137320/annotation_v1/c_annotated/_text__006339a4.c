/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005339A4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006339a4; name: FUN_.text__006339a4
 */


undefined8 FUN__text__006339a4(long param_1,int *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  cVar1 = FUN__text__00619bb0(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (cVar1 != '\0') { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__00618f90(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (uVar2 == *(byte *)(param_2 + 1)) { // [自动静态注释] 条件判断/分支
      iVar3 = FUN__text__006101d0(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((iVar3 == *param_2) && // [自动静态注释] 条件判断/分支
         (uVar6 = FUN__text__00619d30(*(undefined8 *)(param_1 + 0x2f0),(long)param_2 + 6), // [自动静态注释] 调用尚未恢复正式名称的函数
         (uVar6 & 1) != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00620210(*(undefined8 *)(param_1 + 0x2f0),0); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar7 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__00633aa8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00620210(*(undefined8 *)(param_1 + 0x2f0),1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00621170(*(undefined8 *)(param_1 + 0x2f0),(long)param_2 + 6); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006212f0(*(undefined8 *)(param_1 + 0x2f0),(char)param_2[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00621480(*(undefined8 *)(param_1 + 0x2f0),*(undefined1 *)((long)param_2 + 5)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00620b30(*(undefined8 *)(param_1 + 0x2f0),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00620cc0(*(undefined8 *)(param_1 + 0x2f0),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00620e50(*(undefined8 *)(param_1 + 0x2f0),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00620fe0(*(undefined8 *)(param_1 + 0x2f0),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__005ffacc(uVar4,uVar5,*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006203a0(*(undefined8 *)(param_1 + 0x2f0),uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00633aa8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__006337d0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00633884(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


