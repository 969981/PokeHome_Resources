/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0020CA90
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030ca90; name: FUN_.text__0030ca90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0030ca90(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar7 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00304ee0(*_DAT_008a1478,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = DAT_008e55f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined4 *)(DAT_008e55f8 + 0xf00094); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(DAT_008e55f8 + 0xf000a0) = 0x50cdd8;
  auVar7 = FUN__text__0011b95c(*_DAT_0089f508); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar4 + 0xf00098) = 0x10015f008c54000;
  lVar5 = *_DAT_008a2b50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 (*) [16])(lVar4 + 0x68) = auVar7;
  memset((void *)(lVar5 + 0x50),0,0x50cdd8); // [自动静态注释] 内存复制、清零或移动
  memset((void *)(lVar4 + 0x90),0,0xf00000); // [自动静态注释] 内存复制、清零或移动
  memcpy((void *)(lVar4 + 0x90),(void *)(lVar5 + 0x50),0x50cdd8); // [自动静态注释] 内存复制、清零或移动
  FUN__text__00240ddc(&local_28,*(undefined8 *)(lVar4 + 0x50),0x734668); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(lVar4 + 0x58) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(lVar4 + 0x58) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *puVar1 = 0;
  *(long *)(lVar4 + 0x58) = local_28;
  pcVar6 = *(code **)(local_28 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar6 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(local_28 + 0x380) = 0;
    *(undefined8 *)(local_28 + 0x388) = 0;
    *(undefined8 *)(local_28 + 0x370) = 0;
    *(undefined8 *)(local_28 + 0x378) = 0;
    (*pcVar6)(local_28 + 0x390); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(local_28 + 0x394) = 0;
  *(undefined1 *)(local_28 + 0x390) = 1;
  uVar3 = _DAT_008a2b60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(local_28 + 0x398) = lVar4;
  uVar2 = _DAT_008a2b58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(local_28 + 0x370) = uVar3;
  uVar3 = _DAT_008a2b68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(local_28 + 0x378) = uVar2;
  uVar2 = _DAT_008a2b70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(local_28 + 0x380) = uVar3;
  *(undefined8 *)(local_28 + 0x388) = uVar2;
  FUN__text__005e896c(*(undefined8 *)(lVar4 + 0x58),0x70b9f5,0xffffffff,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


