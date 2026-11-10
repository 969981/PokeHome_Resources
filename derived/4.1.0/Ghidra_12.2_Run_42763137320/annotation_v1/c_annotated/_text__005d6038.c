/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D6038
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d6038; name: FUN_.text__005d6038
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d6038(long param_1,long *param_2,void *param_3,size_t param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar7 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sStack_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar6 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
  uVar4 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  sVar5 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x80,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = _DAT_008a59c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    auVar7 = (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcStack_68 = FUN__text__005d619c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puStack_70 = (undefined1 *)((long)register0x00000008 + -0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plStack_60 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pvStack_58 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sStack_50 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005d620c(&uStack_78,auVar7._8_8_); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar2 = *(long *)(auVar7._0_8_ + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(auVar7._0_8_ + 8) = uStack_78;
    FUN__text__005d6038(uStack_78,auVar7._8_8_,uVar4,sVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar1 + 8) = 0;
  *(undefined4 *)(plVar1 + 6) = 0;
  *(undefined4 *)(plVar1 + 10) = 0;
  plVar1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[9] = lVar2 + 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar1 = lVar2 + 0x10;
  plVar1[1] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[2] = (long)plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[3] = 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[4] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  (**(code **)(plVar1[9] + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x60) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(param_1 + 0x60) = plVar1;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_4,0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = plVar1[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xb] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)plVar1[0xc] + 0x18))((long *)plVar1[0xc],lVar3,plVar1[0xd],plVar1[0xe]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar1[0xc] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xd] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xe] = 0x1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memcpy(*(void **)(*(long *)(param_1 + 0x60) + 0x58),param_3,param_4); // [自动静态注释] 内存复制、清零或移动
  FUN__text__005d5c70(*(undefined8 *)(param_1 + 0x60)); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


