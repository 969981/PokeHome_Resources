/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0012C190
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022c190; name: FUN_.text__0022c190
 */


void FUN__text__0022c190(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_cf20 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_cf18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort local_cf10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_76; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_75; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_74; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_73; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 2) { // [自动静态注释] 条件判断/分支
    iVar4 = *(int *)(param_1 + 0x78) + 100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (param_2 != 1) { // [自动静态注释] 条件判断/分支
      if (param_2 == 0) { // [自动静态注释] 条件判断/分支
        uVar3 = FUN__text__00327740(); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined4 *)(param_1 + 0x74) = uVar3;
        *(undefined4 *)(param_1 + 0x78) = 0;
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__0022c1f0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    iVar4 = *(int *)(param_1 + 0x78) + -100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_1 + 0x78) = iVar4;
LAB__text__0022c1f0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    if (*(int *)(param_1 + 0x74) <= (int)lVar6 + *(int *)(param_1 + 0x78)) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    __src = (void *)FUN__text__00327760(); // [自动静态注释] 调用尚未恢复正式名称的函数
    memcpy(local_cf20,__src,0xcea8); // [自动静态注释] 内存复制、清零或移动
    lVar1 = param_1 + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70[0] = local_cf18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = nn::time::ToCalendarTime // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      ((CalendarTime *)&local_78,(CalendarAdditionalInfo *)0x0,(PosixTime *)local_70 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (iVar4 == 0) { // [自动静态注释] 条件判断/分支
      *(int *)(lVar1 + 0x80) = (int)local_78;
      *(int *)(lVar1 + 0x84) = (int)local_76;
      *(int *)(lVar1 + 0x88) = (int)local_75;
      *(int *)(lVar1 + 0x8c) = (int)local_74;
      *(int *)(lVar1 + 0x90) = (int)local_73;
    } // [自动静态注释] 作用域/控制流边界
    if (local_cf20[0] - 1 < 0x3d) break; // [自动静态注释] 条件判断/分支
    if ((local_cf20[0] & 0xfffffffe) == 0x3e) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(lVar1 + 0x7c) = 3;
      uVar3 = 0x17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (local_cf20[0] == 0x3f) { // [自动静态注释] 条件判断/分支
        uVar3 = 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar2 = param_1 + 0x11b34 + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar2 + 4) = uVar3;
      *(undefined4 *)(lVar2 + 8) = 0xf;
      *(undefined4 *)(lVar1 + 0x94) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = 4;
      *(uint *)(param_1 + 0x11b34 + lVar5) = (uint)local_cf10;
    } // [自动静态注释] 作用域/控制流边界
    lVar6 = lVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = lVar5 + 0x11ad0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar6 == 100) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not emulate address calculation at 0x0022c320 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK__text__0022c224 + (ulong)*(byte *)((ulong)(local_cf20[0] - 1) + 0x729610) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


