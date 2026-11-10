/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000BD208
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001bd208; name: FUN_.text__001bd208
 */


void FUN__text__001bd208(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = *(long *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = *(int *)(lVar7 + 0x1b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = *(int *)(lVar7 + 0x1b4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = *(int *)(*(long *)(lVar7 + 0x128) + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = *(long *)(param_1 + 8) + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = FUN__text__0012cb14(lVar7,param_1 + 0xd0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14c4(uVar5,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = FUN__text__0012cb14(lVar7,param_1 + 0x140); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14c4(uVar5,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x60); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(char *)(lVar6 + 0x83) = (char)param_2;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x1b0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(char *)(lVar6 + 0x83) = (char)param_2;
  if (*(int *)(param_1 + 0x4cc) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003a14c4(lVar6,param_2 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = (undefined1)(param_2 & 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x280) != '\0') { // [自动静态注释] 条件判断/分支
    lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x288); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(lVar6 + 0x83) = uVar4;
    FUN__text__003a14c4(lVar6,param_2 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (*(uint *)(param_1 + 0x30) == (uint)(iVar1 != iVar3 && iVar2 == iVar3)) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x4f0); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_2 = param_2 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x720); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x950); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xb80); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xdb0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xfe0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x560); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x790); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x9c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xbf0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xe20); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x1050); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x5d0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x800); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xa30); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xc60); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xe90); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x10c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x640); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x870); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xaa0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xcd0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xf00); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x1130); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x6b0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x8e0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xb10); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xd40); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xf70); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar7 = FUN__text__0012cb14(lVar7,param_1 + 0x11a0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar7 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar7,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


