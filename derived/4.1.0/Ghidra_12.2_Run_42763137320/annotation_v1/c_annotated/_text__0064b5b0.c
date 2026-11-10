/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0054B5B0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064b5b0; name: FUN_.text__0064b5b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0064b5b0(long *param_1,undefined8 param_2,long param_3,uint *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__0064ed38(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = lVar2;
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x16) = 0;
    FUN__text__00667b2c(lVar2,0x2712,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00667b2c(*param_1,0x34,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00667b2c(*param_1,0x4e,0x82); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00667b2c(*param_1,0xd,0x82); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00667b2c(*param_1,0x4e2b,_DAT_008a6528); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00667b2c(*param_1,0x272f,0x70f683); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00667b2c(*param_1,0x54,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0x17] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0xc] = param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0xb) = 0;
    memset((void *)param_1[3],0,0x2000000); // [自动静态注释] 内存复制、清零或移动
    FUN__text__00667b2c(*param_1,0x2711,param_1 + 0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (param_3 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0064b7e8(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    if (param_4 != (uint *)0x0) { // [自动静态注释] 条件判断/分支
      lVar2 = param_1[0x18]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*param_4 != 0) { // [自动静态注释] 条件判断/分支
        uVar5 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          lVar2 = FUN__text__0066bcc8(lVar2,*(undefined8 *)(param_4 + uVar5 * 2)); // [自动静态注释] 调用尚未恢复正式名称的函数
          param_1[0x18] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar1 = uVar5 < *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (bVar1); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00667b2c(*param_1,0x2727); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    if (DAT_00c4f590 != '\0') { // [自动静态注释] 条件判断/分支
      FUN__text__00667b2c(*param_1,0x2797,&DAT_00c4f590); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = FUN__text__0064b8a0(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar5 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00240ddc(&local_28,param_1[0x11],0x760028); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (param_1[2] != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    param_1[2] = local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar4 = *(code **)(local_28 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pcVar4 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(local_28 + 0x380) = 0;
      *(undefined8 *)(local_28 + 0x388) = 0;
      *(undefined8 *)(local_28 + 0x370) = 0;
      *(undefined8 *)(local_28 + 0x378) = 0;
      (*pcVar4)(local_28 + 0x390); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(local_28 + 0x390) = param_1;
    *(code **)(local_28 + 0x370) = FUN__text__0064bb9c;
    *(undefined **)(local_28 + 0x378) = &DAT__text__0064bdf4;
    *(undefined1 **)(local_28 + 0x380) = &LAB__text__0064bdf8;
    *(undefined1 **)(local_28 + 0x388) = &LAB__text__0064be04;
    FUN__text__005e896c(param_1[2],0x71c4ef,0xffffffff,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


