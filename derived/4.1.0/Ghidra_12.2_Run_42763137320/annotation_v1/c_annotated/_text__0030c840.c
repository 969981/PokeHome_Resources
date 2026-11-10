/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0020C840
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030c840; name: FUN_.text__0030c840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0030c840(uint param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar9 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = *_DAT_008a2b30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = 0x50cdd8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar5 = 0x13b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(lVar6 + 0xf000a0) = uVar5;
  auVar9 = FUN__text__0011b95c(*_DAT_0089f508); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar6 + 0xf00098) = 0x10015f008c54000;
  *(undefined1 (*) [16])(lVar6 + 0x68) = auVar9;
  plVar3 = _DAT_008a2b50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = *_DAT_008a2b50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(lVar8 + 0x50) == '\0') { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(lVar8 + 0x45c) = *(undefined1 *)(lVar8 + 0x51);
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(lVar8 + 0x50) = 1;
  uVar5 = FUN__text__005964e0((char *)(lVar8 + 0x50),0x13b8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(lVar8 + 0x1458) = uVar5;
  *(undefined2 *)(lVar8 + 0x1454) = 1;
  if ((param_1 & 1) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar8 + 0x50ce68) = 0;
    *(undefined8 *)(lVar8 + 0x50ce4c) = *(undefined8 *)(lVar8 + 0x142c);
    *(undefined8 *)(lVar8 + 0x50ce54) = *(undefined8 *)(lVar8 + 0x1434);
    *(undefined8 *)(lVar8 + 0x50ce5c) = *(undefined8 *)(lVar8 + 0x143c);
    *(undefined8 *)(lVar8 + 0x50ce64) = *(undefined8 *)(lVar8 + 0x1444);
    *(undefined8 *)(lVar8 + 0x50ce2c) = *(undefined8 *)(lVar8 + 0x140c);
    *(undefined8 *)(lVar8 + 0x50ce34) = *(undefined8 *)(lVar8 + 0x1414);
    *(undefined8 *)(lVar8 + 0x50ce3c) = *(undefined8 *)(lVar8 + 0x141c);
    *(undefined8 *)(lVar8 + 0x50ce44) = *(undefined8 *)(lVar8 + 0x1424);
    *(undefined4 *)(lVar8 + 0x50ce28) = *(undefined4 *)(lVar8 + 0x1408);
    memcpy((void *)(lVar8 + 0x50ce70),(void *)(lVar8 + 0x1460),0x50b9a0); // [自动静态注释] 内存复制、清零或移动
    uVar2 = *(undefined8 *)(lVar8 + 0x50ce08); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(&DAT_00a18810 + lVar8) = *(undefined8 *)(lVar8 + 0x50ce00);
    *(undefined8 *)(&DAT_00a18818 + lVar8) = uVar2;
    uVar2 = *(undefined8 *)(lVar8 + 0x50ce18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(&DAT_00a18820 + lVar8) = *(undefined8 *)(lVar8 + 0x50ce10);
    *(undefined8 *)(&DAT_00a18828 + lVar8) = uVar2;
    uVar5 = FUN__text__005964e0((undefined4 *)(lVar8 + 0x50ce28),&LAB__text__0050ba08); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(lVar8 + 0x145c) = uVar5;
    *(undefined2 *)(lVar8 + 0x1456) = 1;
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = (param_1 ^ 0xffffffff) & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset((void *)(lVar6 + 0x90),0,0xf00000); // [自动静态注释] 内存复制、清零或移动
  memcpy((void *)(lVar6 + 0x90),(void *)(*plVar3 + 0x50),0x50cdd8); // [自动静态注释] 内存复制、清零或移动
  FUN__text__00240ddc(&local_38,*(undefined8 *)(lVar6 + 0x50),0x734668); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(lVar6 + 0x58) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(lVar6 + 0x58) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(lVar6 + 0xf00094) = uVar1;
  *(long *)(lVar6 + 0x58) = local_38;
  pcVar7 = *(code **)(local_38 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar7 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(local_38 + 0x380) = 0;
    *(undefined8 *)(local_38 + 0x388) = 0;
    *(undefined8 *)(local_38 + 0x370) = 0;
    *(undefined8 *)(local_38 + 0x378) = 0;
    (*pcVar7)(local_38 + 0x390); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(local_38 + 0x394) = uVar1;
  *(undefined1 *)(local_38 + 0x390) = 1;
  uVar4 = _DAT_008a2b60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(local_38 + 0x398) = lVar6;
  uVar2 = _DAT_008a2b58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(local_38 + 0x370) = uVar4;
  uVar4 = _DAT_008a2b68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(local_38 + 0x378) = uVar2;
  uVar2 = _DAT_008a2b70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(local_38 + 0x380) = uVar4;
  *(undefined8 *)(local_38 + 0x388) = uVar2;
  FUN__text__005e896c(*(undefined8 *)(lVar6 + 0x58),0x70b9f5,0xffffffff,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


